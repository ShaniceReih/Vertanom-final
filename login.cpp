#include "login.h"
#include "./ui_login.h"

#include <QSqlDatabase>
#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <QCoreApplication>
#include <QSqlError>
#include <QSqlQuery>
#include <QApplication>

#include "mainpage.h"
#include "detabase.h"

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
    , sqlitedb(QSqlDatabase::addDatabase("QSQLITE")) // Initialize sqlitedb
{
    ui->setupUi(this);

    sqlitedb.setDatabaseName("C:/Vertanom/Vertanom/signup.db");

    if (sqlitedb.open()) {
        qDebug() << "Database is Connected";
    } else {
        qDebug() << "Database is not Connected";
        qDebug() << "Error:" << sqlitedb.lastError().text(); // Print the error message
    }
}
Login::~Login()
{
    delete ui;
}

void Login::testDatabaseConnection()
{
    // Test query
    QSqlQuery testQuery("SELECT * FROM users");
    if (testQuery.exec()) {
        qDebug() << "Test query executed successfully!";
    } else {
        // Error handling
        qDebug() << "Error executing test query:" << testQuery.lastError().text();
    }
}


void Login::on_pushButtonLogin_clicked()
{
    QString username = ui->enterUsername->text();
    QString password = ui->enterPassword->text();

    // Prepare query to check user credentials
    QSqlQuery QueryGetUser(sqlitedb);
    QueryGetUser.prepare("SELECT * FROM users WHERE username=:username AND password=:password");

    // Bind values to placeholders
    QueryGetUser.bindValue(":username", username);
    QueryGetUser.bindValue(":password", password);

    // Execute query
    if (QueryGetUser.exec())
    {
        int UserFindCount = 0;
        while (QueryGetUser.next())
        {
            UserFindCount++;
        }
        if (UserFindCount == 1) // User name and password are correct
        {
            QMessageBox::information(this, "User", "Login Success.");
            this->hide();
            MainPage *homepage = new MainPage();
            homepage->show();
        }
        else if (UserFindCount == 0) // User name and password are not correct
        {
            QMessageBox::information(this, "User", "Please Check Your UserName and Password");
        }
    }
    else
    {
        // Handle query execution errors
        qDebug() << "Error executing query:" << QueryGetUser.lastError().text();
        QMessageBox::warning(this, "Error", "Query execution failed: " + QueryGetUser.lastError().text());
    }
}


void Login::on_pushButtonCancel_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "UserName", "Are you sure to close the Application?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes)
    {
        QApplication::quit();
    }
}



void Login::on_pushButton_clicked()
{
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Shanice Reih", "Create a new account?", QMessageBox::Yes | QMessageBox::No);
        if (reply == QMessageBox::Yes)
        {
            // Create a new account

            detabase *signup = new detabase();
            signup->show();
        }
        else // User chose not to create a new account
        {
            QApplication::quit();
        }
}

