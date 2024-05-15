#include "mainpage.h"
#include "ui_mainpage.h"
#include <QDoubleValidator>
#include <QDateTime>
#include <QTableView>
#include <QSqlDatabase>
#include <QtSql/QSql>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>
#include <QStandardItemModel>
#include <QScrollArea>


MainPage::MainPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainPage)
{
    ui->setupUi(this);
    fetchUserFirstName(); // Call fetchUserFirstName() in the constructor
    on_reshCounter_clicked();
    fetchLatestSensorValues();

    connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(onComboBoxIndexChanged(int)));
    connect(this, &MainPage::dataUpdated, this, &MainPage::on_reshCounter_clicked);

    // Connect the dataUpdated signal to the slot that refreshes the abnormal counter
    connect(this, &MainPage::dataUpdated, this, &MainPage:: on_reshCounter_clicked);

    connect(ui->soilMoistureTable, &QTableView::clicked, this, &MainPage::onTableViewClicked);
    connect(ui->phTable, &QTableView::clicked, this, &MainPage::onTableViewClicked);
    connect(ui->humidityTable, &QTableView::clicked, this, &MainPage::onTableViewClicked);
    connect(ui->temperatureTable, &QTableView::clicked, this, &MainPage::onTableViewClicked);

    // Initialize models for each table
    model = new QStandardItemModel();
    ui->soilMoistureTable->setModel(model);
    ui->soilMoistureTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Date and Time")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("Sensor Value")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Status")));
    ui->soilMoistureTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    model = new QStandardItemModel();
    ui->phTable->setModel(model);
    ui->phTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Date and Time")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("Sensor Value")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Status")));
    ui->phTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    model = new QStandardItemModel();
    ui->humidityTable->setModel(model);
    ui->humidityTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Date and Time")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("Sensor Value")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Status")));
    ui->humidityTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    model = new QStandardItemModel();
    ui->temperatureTable->setModel(model);
    ui->temperatureTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Date and Time")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("Sensor Value")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Status")));
    ui->temperatureTable->setEditTriggers(QAbstractItemView::NoEditTriggers);


    // Load data into tables and tab views
    loadDataIntoTables();


}

void MainPage::loadDataIntoTables() {
    // Establish connection to the SQLite database
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("C:/Vertanom/Vertanom/signup.db"); // Corrected the path

    qDebug() << "Attempting to open database for loading data into tables..."; // Add debug message

    if (!sqlitedb.open()) {
        QMessageBox::critical(this, "Database error", "Failed to open database: " + sqlitedb.lastError().text());
        qDebug() << "Failed to open database for loading data into tables:" << sqlitedb.lastError().text(); // Add debug message
        return;
    }

    qDebug() << "Database opened successfully for loading data into tables."; // Add debug message

    // Execute query to fetch all data from sensor_data table
    QSqlQuery query(sqlitedb);
    if (!query.exec("SELECT sensor_type, date_time, value, status FROM sensor_data")) {
        QMessageBox::critical(this, "Database error", "Failed to fetch data from database: " + query.lastError().text());
        qDebug() << "Failed to fetch data from database:" << query.lastError().text(); // Add debug message

        sqlitedb.close();
        return;
    }

    // Iterate through the result and populate tables in all tabs
    while (query.next()) {
        QString sensorType = query.value(0).toString();
        QString dateTime = query.value(1).toString();
        QString value = query.value(2).toString();
        QString status = query.value(3).toString();

        // Find the appropriate tab widget based on sensor type
        QWidget *currentTabWidget = nullptr;
        if (sensorType == "pH") {
            currentTabWidget = ui->phTab;
        } else if (sensorType == "Soil Moisture") {
            currentTabWidget = ui->soilMoistureTab;
        } else if (sensorType == "Humidity") {
            currentTabWidget = ui->humidityTab;
        } else if (sensorType == "Temperature") {
            currentTabWidget = ui->temperatureTab;
        } else {
            // Handle other sensor types here
            QMessageBox::warning(this, "Not Handled", "Sensor type '" + sensorType + "' is not handled.");
            continue;
        }

        // Access the table widget within the current tab widget
        QTableView *currentTableView = currentTabWidget->findChild<QTableView *>();

        if (currentTableView) {
            // Add new row to the table
            QStandardItemModel *currentModel = dynamic_cast<QStandardItemModel *>(currentTableView->model());
            if (currentModel) {
                QList<QStandardItem *> newRowItems;
                newRowItems << new QStandardItem(dateTime) << new QStandardItem(value) << new QStandardItem(status);
                currentModel->appendRow(newRowItems);
                currentTableView->viewport()->update();
            }
        } else {
            QMessageBox::warning(this, "Table Not Found", "Table widget not found in the selected tab.");
        }
    }

    QMessageBox::information(this, "Success", "Data has been loaded into all tables.");

    sqlitedb.close();
}

void MainPage::onTableViewClicked(const QModelIndex &index) {
    // Get the selected row's sensor value from the model
    QModelIndex sensorValueIndex = index.sibling(index.row(), 1); // Assuming sensor value is in the second column
    QVariant sensorValue = sensorValueIndex.data();
    ui->editSensorValue->setText(sensorValue.toString());
}



void MainPage::onComboBoxIndexChanged(int index) {
    // Get the text of the selected item in the combobox
    QString selectedSensor = ui->comboBox->itemText(index);

    // Determine which tab view corresponds to the selected sensor
    QWidget *tabWidget = nullptr;
    if (selectedSensor == "pH") {
        tabWidget = ui->phTab;
    } else if (selectedSensor == "Soil Moisture") {
        tabWidget = ui->soilMoistureTab;
    } else if (selectedSensor == "Humidity") {
        tabWidget = ui->humidityTab;
    } else if (selectedSensor == "Temperature") {
        tabWidget = ui->temperatureTab;
    } else {
        // Handle other sensor types here
        QMessageBox::warning(this, "Not Handled", "Selected Sensor item is not handled.");
        return;
    }

    // Activate the corresponding tab view
    if (tabWidget) {
        ui->tabWidget->setCurrentWidget(tabWidget);
    }


}


void MainPage::setGreetingLabelText(const QString& firstName) {
    QString greetingText = firstName + "'s Vertanom";
    ui->greetingLabel->setText(greetingText);
}

void MainPage::fetchLatestSensorValues() {
    // Establish connection to the SQLite database
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("C:/Vertanom/Vertanom/signup.db"); // Corrected the path

    qDebug() << "Attempting to open database for fetching latest sensor values..."; // Add debug message

    if (!sqlitedb.open()) {
        QMessageBox::critical(this, "Database error", "Failed to open database: " + sqlitedb.lastError().text());
        qDebug() << "Failed to open database for fetching latest sensor values:" << sqlitedb.lastError().text(); // Add debug message
        return;
    }

    qDebug() << "Database opened successfully for fetching latest sensor values."; // Add debug message

    // Execute queries to fetch latest sensor values
    QString queryStr = "SELECT value, date_time FROM sensor_data WHERE sensor_type = ? ORDER BY date_time DESC LIMIT 1";
    QStringList sensorTypes = {"Soil Moisture", "pH", "Temperature", "Humidity"};
    for (const QString& sensorType : sensorTypes) {
        QSqlQuery query(sqlitedb);
        query.prepare(queryStr);
        query.bindValue(0, sensorType);
        if (!query.exec()) {
            qDebug() << "Failed to fetch latest value for" << sensorType << ":" << query.lastError().text();
            continue;
        }
        if (query.next()) {
            QString latestValue = query.value(0).toString();
            QString latestDateTime = query.value(1).toString();
            // Update the corresponding text label
            if (sensorType == "Soil Moisture") {
                ui->soilMoistureLatest->setText(latestValue);
            } else if (sensorType == "pH") {
                ui->phLatest->setText(latestValue);
            } else if (sensorType == "Temperature") {
                ui->temperatureLatest->setText(latestValue);
            } else if (sensorType == "Humidity") {
                ui->humidityLatest->setText(latestValue);
            }
            // Update the current time label
            ui->currentTime->setText(latestDateTime);
        }
    }

    sqlitedb.close();
}




void MainPage::fetchUserFirstName() {
    // Establish connection to the SQLite database
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("C:/Vertanom/Vertanom/signup.db"); // Corrected the path

    qDebug() << "Attempting to open database for fetching user's first name..."; // Add debug message

    if (!sqlitedb.open()) {
        QMessageBox::critical(this, "Database error", "Failed to open database: " + sqlitedb.lastError().text());
        qDebug() << "Failed to open database for fetching user's first name:" << sqlitedb.lastError().text(); // Add debug message
        return;
    }

    qDebug() << "Database opened successfully for fetching user's first name."; // Add debug message

    // Execute query to fetch user's first name from the database
    QSqlQuery query(sqlitedb);
    if (!query.exec("SELECT username FROM users"
                    "")) {
        QMessageBox::critical(this, "Database error", "Failed to fetch user's first name from database: " + query.lastError().text());
        qDebug() << "Failed to fetch user's first name from database:" << query.lastError().text(); // Add debug message

        sqlitedb.close();
        return;
    }

    // Assuming the query returns only one row
    if (query.next()) {
        QString firstName = query.value(0).toString();
        qDebug() << "Fetched user's first name:" << firstName; // Add debug message
        setGreetingLabelText(firstName);
    } else {
        QMessageBox::warning(this, "No Data", "No user data found in the database.");
    }

    sqlitedb.close();

}



void MainPage::createAbnormalCountsTable()
{
    // Establish connection to the SQLite database
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("C:/Vertanom/Vertanom/signup.db"); // Corrected the path

    qDebug() << "Attempting to open database for creating abnormal counts table..."; // Add debug message

    if (!sqlitedb.open()) {
        QMessageBox::critical(this, "Database error", "Failed to open database: " + sqlitedb.lastError().text());
        qDebug() << "Failed to open database for creating abnormal counts table:" << sqlitedb.lastError().text(); // Add debug message
        return;
    }

    qDebug() << "Database opened successfully for creating abnormal counts table."; // Add debug message

    // Create abnormal_counts table if it doesn't exist
    QSqlQuery query(sqlitedb);
    QString createTableQuery = "CREATE TABLE IF NOT EXISTS abnormal_counts ("
                               "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                               "sensor_type TEXT NOT NULL,"
                               "abnormal_count INTEGER NOT NULL,"
                               "date_time TEXT NOT NULL)";
    if (!query.exec(createTableQuery)) {
        QMessageBox::critical(this, "Database error", "Error creating abnormal counts table: " + query.lastError().text());
        qDebug() << "Error creating abnormal counts table:" << query.lastError().text(); // Add debug message

        sqlitedb.close();
        return;
    }

    qDebug() << "Abnormal counts table created successfully."; // Add debug message
    sqlitedb.close();
}


void MainPage::updateAbnormalCount(const QString &sensorType, int abnormalCount)
{
    // Establish connection to the SQLite database
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("C:/Vertanom/Vertanom/signup.db"); // Corrected the path

    qDebug() << "Attempting to open database for updating abnormal counts..."; // Add debug message

    if (!sqlitedb.open()) {
        QMessageBox::critical(this, "Database error", "Failed to open database: " + sqlitedb.lastError().text());
        qDebug() << "Failed to open database for updating abnormal counts:" << sqlitedb.lastError().text(); // Add debug message
        return;
    }

    qDebug() << "Database opened successfully for updating abnormal counts."; // Add debug message

    // Get current date and time
    QString dateTime = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");

    // Prepare the SQL query to insert or update the abnormal count
    QSqlQuery query(sqlitedb);
    query.prepare("INSERT INTO abnormal_counts (sensor_type, abnormal_count, date_time) "
                  "VALUES (:sensor_type, :abnormal_count, :date_time) "
                  "ON CONFLICT(sensor_type) DO UPDATE SET abnormal_count=abnormal_count+:abnormal_count, date_time=:date_time");

    query.bindValue(":sensor_type", sensorType);
    query.bindValue(":abnormal_count", abnormalCount); // Bind the abnormal count value
    query.bindValue(":date_time", dateTime);

    // Execute the query
    if (!query.exec()) {


        qDebug() << "Failed to update abnormal count:" << query.lastError().text(); // Add debug message
        return;
    }

    qDebug() << "Abnormal count updated successfully."; // Add debug message

    sqlitedb.close();
}



void MainPage::on_pushButton_clicked()
{
    // Add the new SQLite database connection
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("C:/Vertanom/Vertanom/signup.db"); // Corrected the path

    qDebug() << "Attempting to open database..."; // Add debug message

    if (!sqlitedb.open()) {
        QMessageBox::critical(this, "Database error", "Failed to open database: " + sqlitedb.lastError().text());
        qDebug() << "Failed to open database:" << sqlitedb.lastError().text(); // Add debug message
        return;
    }

    qDebug() << "Database opened successfully."; // Add debug message
    QSqlQuery query(sqlitedb); // Pass the database connection to the query

    // Create sensor_data table if it doesn't exist
    QString createTableQuery = "CREATE TABLE IF NOT EXISTS sensor_data ("
                               "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                               "sensor_type TEXT NOT NULL,"
                               "date_time TEXT NOT NULL,"
                               "value REAL NOT NULL,"
                               "status TEXT NOT NULL)";
    if (!query.exec(createTableQuery)) {
        QMessageBox::critical(this, "Database error", "Error creating table: " + query.lastError().text());
        qDebug() << "Error creating table:" << query.lastError().text(); // Add debug message

        sqlitedb.close();
        return;
    }

    qDebug() << "Sensor data table created successfully."; // Add debug message

    // Get Input from UI
    QString userInput = ui->sensorValue->displayText();
    QString selectedSensor = ui->comboBox->currentText();

    // Create a QDoubleValidator to Sensor Value Input
    QDoubleValidator validator;
    int pos = 0;
    QValidator::State state = validator.validate(userInput, pos);

    if (state != QValidator::Acceptable) {
        QMessageBox::critical(this, "Validation Error", "Not a Valid Data.");
    } else {
        // Input is a valid double
        QString dateTime = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"); // Get current date and time
        QString sensorValue = userInput;
        QString status = "NORMAL";

        // Prepare the SQL query to insert data into the database
        QSqlQuery insertQuery(sqlitedb);
        insertQuery.prepare("INSERT INTO sensor_data (sensor_type, date_time, value, status) "
                            "VALUES (:sensor_type, :date_time, :value, :status)");

        // Check if the selected sensor is pH and if the pH value satisfies the condition
        if (selectedSensor == "pH" && (sensorValue.toDouble() < 5.5 || sensorValue.toDouble() > 6.0)) {
            status = "ABNORMAL";
        }
        if (selectedSensor == "Humidity" && (sensorValue.toDouble() < 30 || sensorValue.toDouble() > 50)) {
            status = "ABNORMAL";
        }
        if (selectedSensor == "Temperature" && (sensorValue.toDouble() < 18 || sensorValue.toDouble() > 25)) {
            status = "ABNORMAL";
        }
        if (selectedSensor == "Soil Moisture " && (sensorValue.toDouble() < 20 || sensorValue.toDouble() > 60)) {
            status = "ABNORMAL";
        }
        insertQuery.bindValue(":sensor_type", selectedSensor);
        insertQuery.bindValue(":date_time", dateTime);
        insertQuery.bindValue(":value", sensorValue);
        insertQuery.bindValue(":status", status);

        // Execute the insert query
        if (!insertQuery.exec()) {
            QMessageBox::critical(this, "Database error", "Failed to insert data into database: " + insertQuery.lastError().text());
            qDebug() << "Failed to insert data into database:" << insertQuery.lastError().text(); // Add debug message
            return;
        }

        qDebug() << "Data inserted successfully into sensor_data table."; // Add debug message

        // Update abnormal count if status is ABNORMAL
        if (status == "ABNORMAL") {
            updateAbnormalCount(selectedSensor, 1); // Increment abnormal count by 1
        }

        // Access the correct tab widget based on the selected sensor
        QWidget *currentTabWidget = nullptr;
        if (selectedSensor == "pH") {
            currentTabWidget = ui->phTab;
        } else if (selectedSensor == "Soil Moisture") {
            currentTabWidget = ui->soilMoistureTab;
        } else if (selectedSensor == "Humidity") {
            currentTabWidget = ui->humidityTab;
        } else if (selectedSensor == "Temperature") {
            currentTabWidget = ui->temperatureTab;
        } else {
            // Handle other combo box selections here
            QMessageBox::warning(this, "Not Handled", "Selected Sensor item is not handled.");
            return;
        }

        // Access the table widget within the current tab widget
        QTableView *currentTableView = currentTabWidget->findChild<QTableView *>();

        if (currentTableView) {
            // Add new row to the table
            QStandardItemModel *currentModel = dynamic_cast<QStandardItemModel *>(currentTableView->model());
            if (currentModel) {
                QList<QStandardItem *> newRowItems;
                newRowItems << new QStandardItem(dateTime) << new QStandardItem(sensorValue) << new QStandardItem(status);
                currentModel->appendRow(newRowItems);
                currentTableView->viewport()->update();
            }
        } else {
            QMessageBox::warning(this, "Table Not Found", "Table widget not found in the selected tab.");
        }

        QMessageBox::information(this, "Success", selectedSensor + " with a value of " + userInput + " has been saved.");
    }
}

void MainPage::on_reshData_clicked()
{
    // Establish connection to the SQLite database
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("C:/Vertanom/Vertanom/signup.db"); // Corrected the path

    qDebug() << "Attempting to open database for refreshing data..."; // Add debug message

    if (!sqlitedb.open()) {
        QMessageBox::critical(this, "Database error", "Failed to open database: " + sqlitedb.lastError().text());
        qDebug() << "Failed to open database for refreshing data:" << sqlitedb.lastError().text(); // Add debug message
        return;
    }

    qDebug() << "Database opened successfully for refreshing data."; // Add debug message

    // Execute query to fetch all data from sensor_data table
    QSqlQuery query(sqlitedb);
    if (!query.exec("SELECT sensor_type, date_time, value, status FROM sensor_data")) {
        QMessageBox::critical(this, "Database error", "Failed to fetch data from database: " + query.lastError().text());
        qDebug() << "Failed to fetch data from database:" << query.lastError().text(); // Add debug message

        sqlitedb.close();
        return;
    }

    // Iterate through the result and populate tables in all tabs
    while (query.next()) {
        QString sensorType = query.value(0).toString();
        QString dateTime = query.value(1).toString();
        QString value = query.value(2).toString();
        QString status = query.value(3).toString();

        // Find the appropriate tab widget based on sensor type
        QWidget *currentTabWidget = nullptr;
        if (sensorType == "pH") {
            currentTabWidget = ui->phTab;
        } else if (sensorType == "Soil Moisture") {
            currentTabWidget = ui->soilMoistureTab;
        } else if (sensorType == "Humidity") {
            currentTabWidget = ui->humidityTab;
        } else if (sensorType == "Temperature") {
            currentTabWidget = ui->temperatureTab;
        } else {
            // Handle other sensor types here
            QMessageBox::warning(this, "Not Handled", "Sensor type '" + sensorType + "' is not handled.");
            continue;
        }

        // Access the table widget within the current tab widget
        QTableView *currentTableView = currentTabWidget->findChild<QTableView *>();

        if (currentTableView) {
            // Find existing rows with the same dateTime and update them
            QStandardItemModel *currentModel = dynamic_cast<QStandardItemModel *>(currentTableView->model());
            if (currentModel) {
                int rowCount = currentModel->rowCount();
                bool updated = false;
                for (int row = 0; row < rowCount; ++row) {
                    QModelIndex dateTimeIndex = currentModel->index(row, 0); // Assuming dateTime is in the first column
                    if (dateTimeIndex.isValid() && currentModel->data(dateTimeIndex).toString() == dateTime) {
                        currentModel->setData(currentModel->index(row, 1), value);
                        currentModel->setData(currentModel->index(row, 2), status);
                        updated = true;
                        break;
                    }
                }
                if (!updated) {
                    // Add new row to the table
                    QList<QStandardItem *> newRowItems;
                    newRowItems << new QStandardItem(dateTime) << new QStandardItem(value) << new QStandardItem(status);
                    currentModel->appendRow(newRowItems);
                }
                currentTableView->viewport()->update();
            }
        } else {
            QMessageBox::warning(this, "Table Not Found", "Table widget not found in the selected tab.");
        }
    }

    QMessageBox::information(this, "Success", "Data has been refreshed in all tables.");

    sqlitedb.close();
}



void MainPage::clearAllTables()
{
    // Clear all tables in all tabs
    clearTable(ui->phTable);
    clearTable(ui->soilMoistureTable);
    clearTable(ui->humidityTable);
    clearTable(ui->temperatureTable);
}

void MainPage::clearTable(QTableView *tableView)
{
    // Clear the table
    if (tableView) {
        QStandardItemModel *model = dynamic_cast<QStandardItemModel *>(tableView->model());
        if (model) {
            model->removeRows(0, model->rowCount());
        }
    }
}

MainPage::~MainPage()
{
    delete ui;
}


void MainPage::on_reshCounter_clicked()
{
    // Establish connection to the SQLite database
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("C:/Vertanom/Vertanom/signup.db"); // Corrected the path

    qDebug() << "Attempting to open database for fetching latest abnormal counts..."; // Add debug message

    if (!sqlitedb.open()) {
        qDebug() << "Failed to open database for fetching latest abnormal counts:" << sqlitedb.lastError().text(); // Add debug message
        return;
    }

    qDebug() << "Database opened successfully for fetching latest abnormal counts."; // Add debug message

    // Execute query to fetch abnormal counts for each sensor type
    QSqlQuery query(sqlitedb);
    if (!query.exec("SELECT sensor_type, COUNT(*) FROM sensor_data WHERE status = 'ABNORMAL' GROUP BY sensor_type")) {
        qDebug() << "Failed to fetch latest abnormal counts from database:" << query.lastError().text(); // Add debug message
        sqlitedb.close();
        return;
    }

    // Update the QLabel widgets with abnormal count data
    while (query.next()) {
        QString sensorType = query.value(0).toString();
        int abnormalCount = query.value(1).toInt();
        if (sensorType == "Soil Moisture") {
            ui->soilMoistureAbnormalCounter->setText(QString::number(abnormalCount));
        } else if (sensorType == "pH") {
            ui->pHAbnormalCounter->setText(QString::number(abnormalCount));
        } else if (sensorType == "Temperature") {
            ui->temperatureAbnormalCounter->setText(QString::number(abnormalCount));
        } else if (sensorType == "Humidity") {
            ui->humidityAbnormalCounter->setText(QString::number(abnormalCount));
        }
    }

    sqlitedb.close();
}



void MainPage::on_verticalScrollBar_actionTriggered(int action)
{

}


void MainPage::on_updateButton_clicked()
{
    // Get the current tab widget
    QWidget *currentTabWidget = ui->tabWidget->currentWidget();

    // Check if the current tab widget is the temperatureTable
    if (currentTabWidget != ui->temperatureTab) {
        QMessageBox::warning(this, "Warning", "This action is only applicable in the Temperature tab.");
        return;
    }

    // Get the current tab index
    int currentIndex = ui->tabWidget->currentIndex();

    // Find the appropriate table view based on the current tab
    QTableView *currentTableView = ui->temperatureTable;

    // Check if a row is selected in the current table view
    if (!currentTableView) {
        QMessageBox::warning(this, "Warning", "No table view found for the current tab.");
        return;
    }

    QModelIndexList selection = currentTableView->selectionModel()->selectedRows();
    if (selection.isEmpty()) {
        QMessageBox::warning(this, "Warning", "No row selected.");
        return;
    }
    QModelIndex index = selection.at(0);

    // Retrieve updated data from the selected row
    QString dateTime = model->data(model->index(index.row(), 0)).toString(); // Assuming dateTime is in the first column
    QString sensorValue = ui->editSensorValue->text(); // Use the edited value directly
    QString selectedSensor = ui->comboBox->currentText();

    // Validate the edited sensor value
    QDoubleValidator validator;
    int pos = 0;
    QValidator::State state = validator.validate(sensorValue, pos);
    if (state != QValidator::Acceptable) {
        QMessageBox::critical(this, "Validation Error", "Not a Valid Data.");
        return;
    }

    // Check if the edited sensor value satisfies the condition for abnormal status
    QString status = "NORMAL"; // Default status
    double editedValue = sensorValue.toDouble();
    if (selectedSensor == "pH" && (editedValue < 5.5 || editedValue > 6.0)) {
        status = "ABNORMAL";
    }
    if (selectedSensor == "Humidity" && (editedValue < 30 || editedValue > 50)) {
        status = "ABNORMAL";
    }
    if (selectedSensor == "Temperature" && (editedValue < 18 || editedValue > 25)) {
        status = "ABNORMAL";
    }
    if (selectedSensor == "Soil Moisture" && (editedValue < 20 || editedValue > 60)) {
        status = "ABNORMAL";
    }

    // Connect to the database
    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isValid()) {
        qDebug() << "Database connection invalid.";
        QMessageBox::critical(this, "Database error", "Database connection invalid.");
        return;
    }

    // Begin transaction
    if (!db.transaction()) {
        qDebug() << "Failed to begin transaction:" << db.lastError().text();
        QMessageBox::critical(this, "Database error", "Failed to begin transaction: " + db.lastError().text());
        return;
    }

    // Construct the SQL query
    QSqlQuery updateQuery(db);
    updateQuery.prepare("UPDATE sensor_data SET value = :sensorValue, status = :status WHERE date_time = :dateTime");
    updateQuery.bindValue(":sensorValue", sensorValue);
    updateQuery.bindValue(":status", status);
    updateQuery.bindValue(":dateTime", dateTime);

    // Execute the query
    if (!updateQuery.exec()) {
        qDebug() << "Error updating data:" << updateQuery.lastError().text();
        QMessageBox::critical(this, "Database error", "Error updating data: " + updateQuery.lastError().text());

        // Rollback transaction on error
        if (!db.rollback()) {
            qDebug() << "Failed to rollback transaction:" << db.lastError().text();
            QMessageBox::critical(this, "Database error", "Failed to rollback transaction: " + db.lastError().text());
        }
        return;
    }

    // Commit transaction
    if (!db.commit()) {
        qDebug() << "Failed to commit transaction:" << db.lastError().text();
        QMessageBox::critical(this, "Database error", "Failed to commit transaction: " + db.lastError().text());
        return;
    }

    // Update the model item to reflect changes
    model->setData(model->index(index.row(), 1), sensorValue); // Assuming sensor value is in the second column
    model->setData(model->index(index.row(), 2), status); // Assuming status is in the third column

    emit dataUpdated();

    qDebug() << "Data updated successfully.";
    QMessageBox::information(this, "Success", "Data updated successfully.");
}




void MainPage::on_deleteEntry_clicked()
{
    QModelIndexList selection = ui->temperatureTable->selectionModel()->selectedRows();

    // Establish connection to the SQLite database
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("C:/Vertanom/Vertanom/signup.db"); // Corrected the path

    qDebug() << "Attempting to open database for refreshing data..."; // Add debug message

    if (!sqlitedb.open()) {
        QMessageBox::critical(this, "Database error", "Failed to open database: " + sqlitedb.lastError().text());
        qDebug() << "Failed to open database for refreshing data:" << sqlitedb.lastError().text(); // Add debug message
        return;
    }

    qDebug() << "Database opened successfully for refreshing data."; // Add debug message

    if (selection.isEmpty()) {
        QMessageBox::warning(this, "Warning", "No row selected.");
        return;
    }

    QMessageBox::StandardButton confirmDelete;
    confirmDelete = QMessageBox::question(this, "Confirm Delete", "Are you sure you want to delete selected row(s)?",
                                          QMessageBox::Yes | QMessageBox::No);

    if (confirmDelete == QMessageBox::No) {
        return;
    }

    QSqlQuery query;
    foreach(const QModelIndex &index, selection) {
        int row = index.row();
        QString dateTime = model->data(model->index(row, 0)).toString(); // Assuming dateTime is in the first column
        QString sensorValue = model->data(model->index(row, 1)).toString(); // Assuming sensor value is in the second column

        // Prepare the DELETE query to remove the entry from the database
        query.prepare("DELETE FROM sensor_data WHERE date_time = ? AND value = ?");
        query.addBindValue(dateTime);
        query.addBindValue(sensorValue);

        if (!query.exec()) {
            QMessageBox::critical(this, "Database error", "Error deleting data: " + query.lastError().text());
        } else {
            model->removeRow(row);
        }
    }
}

void MainPage::on_userButton_clicked()
{
    UserProfile *profile = new UserProfile();
    profile->show();
}


void MainPage::on_aboutButton_clicked()
{
    AboutPage *info = new AboutPage();
    info->show();
}


void MainPage::on_logoutButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Logout", "Are you sure you want to log out?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes)
    {
        QApplication::quit();
    }
}

