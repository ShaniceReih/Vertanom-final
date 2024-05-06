#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QMessageBox>
#include "mainpage.h"
#include "detabase.h"

#include <QtSql/QtSql>


QT_BEGIN_NAMESPACE
namespace Ui {
class Login;
}
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();
    void testDatabaseConnection();

private slots:

    void on_pushButtonCancel_clicked();

    void on_pushButtonLogin_clicked();

    void on_pushButton_clicked();

private:
    Ui::Login *ui;
     QSqlDatabase sqlitedb;
};
#endif // LOGIN_H
