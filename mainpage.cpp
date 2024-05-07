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


MainPage::MainPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainPage)
{
    ui->setupUi(this);
    //add ComboBox Sensor



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


}


void MainPage::on_pushButton_clicked()
{
    // Add the new SQLite database connection
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("/Users/tristanlistanco/Developer/BS-CA/CCC102/System/Vertanom-final/signup.db"); // Corrected the path

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

    // Get Input from UI
    QString userInput = ui->sensorValue->displayText();
    QString selectedSensor = ui->comboBox->currentText();

    // Create a QDoubleValidator to Sensor Value Input
    QDoubleValidator validator;
    int pos = 0;
    QValidator::State state = validator.validate(userInput, pos);

    if (state != QValidator::Acceptable) {
        QMessageBox::critical(this, "Validation Error", "Input must be a valid double.");
    } else {
        // Input is a valid double
        QString dateTime = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"); // Get current date and time
        QString sensorValue = userInput;
        QString status = "NORMAL";

        // Prepare the SQL query to insert data into the database
        QSqlQuery query(sqlitedb);
        query.prepare("INSERT INTO sensor_data (sensor_type, date_time, value, status) "
                      "VALUES (:sensor_type, :date_time, :value, :status)");
        query.bindValue(":sensor_type", selectedSensor);
        query.bindValue(":date_time", dateTime);
        query.bindValue(":value", sensorValue);
        query.bindValue(":status", status);

        // Execute the query
        if (!query.exec()) {
            QMessageBox::critical(this, "Database error", "Failed to insert data into database: " + query.lastError().text());
            qDebug() << "Failed to insert data into database:" << query.lastError().text(); // Add debug message
            return;
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


MainPage::~MainPage()
{
    delete ui;
}

