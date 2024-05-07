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

int MainPage::getCurrentUserId() {
    // Replace this placeholder logic with your actual implementation to get the current user's ID

    // Assuming you have a user authentication system and you're storing the currently logged-in user's credentials
    QString loggedInUsername = getLoggedInUsername(); // Placeholder method to get the logged-in username

    // Initialize Database
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("/path/to/your/database.db"); // Replace with your database file path

    qDebug() << "Attempting to open database...";

    if (!sqlitedb.open()) {
        QMessageBox::critical(this, "Database error", "Failed to open database: " + sqlitedb.lastError().text());
        qDebug() << "Failed to open database:" << sqlitedb.lastError().text();
        return -1; // Return -1 to indicate failure
    }

    qDebug() << "Database opened successfully.";

    // Query to retrieve the user ID based on the logged-in username
    QString selectQuery = "SELECT id FROM users WHERE username = :username"; // Assuming the column name for username is 'username'

    QSqlQuery query(sqlitedb);
    query.prepare(selectQuery);
    query.bindValue(":username", loggedInUsername);

    // Execute the query
    if (!query.exec()) {
        QMessageBox::critical(this, "Database error", "Error fetching user ID: " + query.lastError().text());
        qDebug() << "Error executing select query:" << query.lastError().text();
        sqlitedb.close();
        return -1; // Return -1 to indicate failure
    }

    // Retrieve the user ID
    if (query.next()) {
        int userId = query.value(0).toInt(); // Assuming the user ID is in the first column
        qDebug() << "User ID for" << loggedInUsername << "is" << userId;
        return userId;
    } else {
        qDebug() << "No user found for" << loggedInUsername;
        return -1; // Return -1 to indicate failure
    }

    // Close the database connection
    sqlitedb.close();
}
QString MainPage::getLoggedInUsername() {
    // Replace this placeholder logic with your actual implementation to retrieve the logged-in username
    // This might involve accessing session variables, global variables, or retrieving the username from the authentication context
    return "example_user"; // Placeholder username
}

void MainPage::on_pushButton_clicked()
{
    QString userInput = ui->sensorValue->displayText();


    // Initialize Database
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("/Users/tristanlistanco/Developer/BS-CA/CCC102/System/Vertanom-final/signup.db");

    qDebug() << "Attempting to open database...";

    if (!sqlitedb.open()) {
        QMessageBox::critical(this, "Database error", "Failed to open database: " + sqlitedb.lastError().text());
        qDebug() << "Failed to open database:" << sqlitedb.lastError().text();
        return;
    }

    qDebug() << "Database opened successfully.";

    QSqlQuery query(sqlitedb);

    // Create sensors table if it doesn't exist
    QString createSensorsTableQuery = "CREATE TABLE IF NOT EXISTS sensors ("
                                      "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                                      "user_id INTEGER NOT NULL,"
                                      "soil_moisture REAL NOT NULL,"
                                      "ph REAL NOT NULL,"
                                      "turbidity REAL NOT NULL,"
                                      "temperature REAL NOT NULL,"
                                      "FOREIGN KEY (user_id) REFERENCES users(id))";

    if (!query.exec(createSensorsTableQuery)) {
        QMessageBox::critical(this, "Database error", "Error creating sensors table: " + query.lastError().text());
        qDebug() << "Error creating sensors table:" << query.lastError().text();
        sqlitedb.close();
        return;
    }
    qDebug() << "Table created successfully.";

    // Validate input
    QDoubleValidator validator;
    int pos = 0;
    QValidator::State state = validator.validate(userInput, pos);

    if (state != QValidator::Acceptable) {
        QMessageBox::critical(this, "Validation Error", "Input must be a valid double.");
    } else {
        // Input is a valid double
        QString dateTime = QDateTime::currentDateTime().toString("MMM d, yyyy h:mmAP"); // Get current date and time
        QString sensorValue = userInput;
        QString status = "NORMAL";

        // Check the selected item in the combo box
        QString selectedSensor = ui->comboBox->currentText();

        // Insert data into the sensors table based on selected sensor
        QString insertQuery;
        if (selectedSensor == "Soil Moisture") {
            insertQuery = "INSERT INTO sensors (user_id, soil_moisture) VALUES (?, ?)";
        } else if (selectedSensor == "pH") {
            insertQuery = "INSERT INTO sensors (user_id, ph) VALUES (?, ?)";
        } else if (selectedSensor == "Turbidity") {
            insertQuery = "INSERT INTO sensors (user_id, turbidity) VALUES (?, ?)";
        } else if (selectedSensor == "Temperature") {
            insertQuery = "INSERT INTO sensors (user_id, temperature) VALUES (?, ?)";
        } else {
            QMessageBox::warning(this, "Not Handled", "Selected combo box item is not handled.");
            return;
        }

        query.prepare(insertQuery);
        query.bindValue(0, 2);
        query.bindValue(1, userInput.toDouble());

        // Execute the query
        if (!query.exec()) {
            QMessageBox::critical(this, "Database error", "Error inserting data: " + query.lastError().text());
            qDebug() << "Error executing insert query:" << query.lastError().text();
        } else {
            qDebug() << "Data inserted successfully.";
            QMessageBox::information(this, "Success", selectedSensor + " with a value of " + userInput + " has been saved.");
        }
    }

    // Close the database connection
    sqlitedb.close();
}

MainPage::~MainPage()
{
    delete ui;
}
