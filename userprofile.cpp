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
    sqlitedb.setDatabaseName("C:/Vertanom/Vertanom/signup.db");

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
    query.prepare("SELECT fullname, email, address, username, password FROM users WHERE username = ?");
    query.addBindValue(currentUserUsername);
    if (!query.exec()) {
        QMessageBox::critical(this, "Database error", "Failed to fetch user details from database: " + query.lastError().text());
        qDebug() << "Failed to fetch user details from database:" << query.lastError().text();
        sqlitedb.close();
        return;
    }

    // Check if there is a user record
    if (query.next()) {
        QString fullname = query.value(0).toString();
        ui->FULLNAME->setText(fullname);
        QString email = query.value(1).toString();
        ui->EMAIL->setText(email);
        QString address = query.value(2).toString();
        ui->ADDRESS->setText(address);
        QString username = query.value(3).toString();
        ui->USERNAME->setText(username);
        QString password = query.value(4).toString();
        ui->PASSWORD->setText(password);
    } else {
        QMessageBox::warning(this, "No Data", "No user data found in the database for the current user.");
    }

    sqlitedb.close();
}
