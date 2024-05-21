// userprofile.cpp
#include "userprofile.h"
#include "ui_userprofile.h"
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>

// Definition of the global variable to store current user's username
QString currentUserUsername;

UserProfile::UserProfile(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UserProfile)
{
    ui->setupUi(this);

    // Establish connection to the SQLite database
    sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("/Users/tristanlistanco/Developer/BS-CA/CCC102/System/Vertanom-final/signup.db");

    qDebug() << "Attempting to open database for fetching user details...";

    if (!sqlitedb.open()) {
        QMessageBox::critical(this, "Database error", "Failed to open database: " + sqlitedb.lastError().text());
        qDebug() << "Failed to open database for fetching user details:" << sqlitedb.lastError().text();
        return;
    }

    qDebug() << "Database opened successfully for fetching user details.";

    // Call fetchUserInfo to fetch and display user details
    fetchUserInfo();
}

UserProfile::~UserProfile()
{
    delete ui;
}

void UserProfile::fetchUserInfo() {
    // Check if current user's username is empty
    if (currentUserUsername.isEmpty()) {
        QMessageBox::warning(this, "No User", "No user is logged in.");
        return;
    }

    // Execute query to fetch user details for the current user
    QSqlQuery query(sqlitedb);
    query.prepare("SELECT firstname, lastname, email, address, username, password FROM users WHERE username = ?");
    query.addBindValue(currentUserUsername);
    if (!query.exec()) {
        QMessageBox::critical(this, "Database error", "Failed to fetch user details from database: " + query.lastError().text());
        qDebug() << "Failed to fetch user details from database:" << query.lastError().text();
        sqlitedb.close();
        return;
    }

    // Check if there is a user record
    if (query.next()) {
        QString firstName = query.value(0).toString(); // Fetch first data
        QString lastName = query.value(1).toString(); // Fetch second data
        QString fullName = firstName + " " + lastName; // Concatenate the data
        ui->FULLNAME->setText(fullName);
        QString email = query.value(2).toString();
        ui->EMAIL->setText(email);
        QString address = query.value(3).toString();
        ui->ADDRESS->setText(address);
        QString username = query.value(4).toString();
        ui->USERNAME->setText(username);
        QString password = query.value(5).toString();
        ui->PASSWORD->setText(password);
    } else {
        QMessageBox::warning(this, "No Data", "No user data found in the database for the current user.");
    }

    sqlitedb.close();
}
