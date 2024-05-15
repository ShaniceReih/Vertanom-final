/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *enterUsername;
    QLineEdit *enterPassword;
    QPushButton *pushButtonLogin;
    QPushButton *pushButtonCancel;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(735, 516);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 731, 481));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  border-radius: 50px;\n"
"}"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/loginpage.png")));
        label->setScaledContents(true);
        enterUsername = new QLineEdit(centralwidget);
        enterUsername->setObjectName("enterUsername");
        enterUsername->setGeometry(QRect(140, 230, 211, 41));
        enterUsername->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"   border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 20px;\n"
"   border-color: #800080;\n"
"   color: #800080;\n"
"   background-color: #FFB6C1;\n"
"  padding-left:50px;\n"
"  padding-right:50px;\n"
"}\n"
"\n"
"QLineEdit:Hover{\n"
"  border: 2px solid rgb(170, 85, 127);\n"
"}\n"
""));
        enterPassword = new QLineEdit(centralwidget);
        enterPassword->setObjectName("enterPassword");
        enterPassword->setGeometry(QRect(140, 280, 211, 41));
        enterPassword->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"   border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 20px;\n"
"   border-color: #800080;\n"
"   color: #800080;\n"
"   background-color: #FFB6C1;\n"
"  padding-left:50px;\n"
"  padding-right:50px;\n"
"}\n"
"\n"
"QLineEdit:Hover{\n"
"  border: 2px solid rgb(170, 85, 127);\n"
"}\n"
""));
        enterPassword->setEchoMode(QLineEdit::Password);
        pushButtonLogin = new QPushButton(centralwidget);
        pushButtonLogin->setObjectName("pushButtonLogin");
        pushButtonLogin->setGeometry(QRect(160, 330, 83, 29));
        pushButtonLogin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 13px;\n"
"   border-color: #800080;\n"
"   color: #800080;\n"
"   background-color: #FFB6C1;\n"
"}\n"
"\n"
""));
        pushButtonCancel = new QPushButton(centralwidget);
        pushButtonCancel->setObjectName("pushButtonCancel");
        pushButtonCancel->setGeometry(QRect(250, 330, 83, 29));
        pushButtonCancel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 13px;\n"
"   border-color: #800080;\n"
"   color: #800080;\n"
"   background-color: #FFB6C1;\n"
"}\n"
"\n"
""));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(210, 370, 83, 29));
        QFont font;
        font.setUnderline(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushbutton{\n"
"text-color: rgb(255, 255, 255);\n"
"}"));
        pushButton->setFlat(true);
        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 735, 25));
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName("statusbar");
        Login->setStatusBar(statusbar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        label->setText(QString());
        enterUsername->setText(QString());
        enterUsername->setPlaceholderText(QCoreApplication::translate("Login", "Enter username", nullptr));
        enterPassword->setText(QString());
        enterPassword->setPlaceholderText(QCoreApplication::translate("Login", "Enter password", nullptr));
        pushButtonLogin->setText(QCoreApplication::translate("Login", "Login", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("Login", "Cancel", nullptr));
        pushButton->setText(QCoreApplication::translate("Login", "sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
