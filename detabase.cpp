#include "detabase.h"
#include "ui_detabase.h"
#include <QSqlDatabase>
#include <QtSql/QSql>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>

detabase::detabase(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::detabase)
{
    ui->setupUi(this);
}

detabase::~detabase()
{
    delete ui;
}

void detabase::on_pushButton_clicked()
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

    // Create users table if it doesn't exist
    QString createTableQuery = "CREATE TABLE IF NOT EXISTS users ("
                               "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                               "fullname TEXT NOT NULL,"
                               "email TEXT NOT NULL,"
                               "username TEXT NOT NULL,"
                               "password TEXT NOT NULL)";
    if (!query.exec(createTableQuery)) {
        QMessageBox::critical(this, "Database error", "Error creating table: " + query.lastError().text());
        qDebug() << "Error creating table:" << query.lastError().text(); // Add debug message
        sqlitedb.close();
        return;
    }

    qDebug() << "Table created successfully."; // Add debug message

    // Retrieve data from UI elements
    QString fullname = ui->fullname->text();
    QString email = ui->email->text();
    QString username = ui->username->text();
    QString password = ui->password->text();

    // Prepare the insert query with placeholders
    query.prepare("INSERT INTO users (fullname, email, username, password) VALUES (:fullname, :email, :username, :password)");
    query.bindValue(":fullname", fullname);
    query.bindValue(":email", email);
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    // Execute the insert query
    if (!query.exec()) {
        QMessageBox::critical(this, "Database error", "Error inserting data: " + query.lastError().text());
        qDebug() << "Error executing insert query:" << query.lastError().text(); // Add debug message
    } else {
        qDebug() << "Data inserted successfully."; // Add debug message

        QMessageBox::information(this, "Database added", "Data added to database");
        ui->fullname->clear();
        ui->email->clear();
        ui->username->clear();
        ui->password->clear();
    }

    // Close the database connection
    sqlitedb.close();
}
