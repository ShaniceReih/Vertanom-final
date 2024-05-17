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
#include <QtWidgets/QPushButton>
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
    QLabel *label_2;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(735, 486);
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
        pushButtonLogin->setGeometry(QRect(160, 330, 83, 21));
        pushButtonLogin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #FFB6C1;\n"
"background-color: #472F5B;\n"
"font-weight: bold;\n"
" border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 10px;\n"
"   border-color: #800080;\n"
"}"));
        pushButtonCancel = new QPushButton(centralwidget);
        pushButtonCancel->setObjectName("pushButtonCancel");
        pushButtonCancel->setGeometry(QRect(250, 330, 83, 21));
        pushButtonCancel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #FFB6C1;\n"
"background-color: #472F5B;\n"
"font-weight: bold;\n"
" border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 10px;\n"
"   border-color: #800080;\n"
"}"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(280, 380, 51, 21));
        QFont font;
        font.setItalic(true);
        font.setUnderline(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushbutton{\n"
"text-color: rgb(255, 255, 255);\n"
"}"));
        pushButton->setFlat(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(160, 380, 161, 20));
        QFont font1;
        font1.setItalic(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color:white;"));
        Login->setCentralWidget(centralwidget);
        label->raise();
        enterUsername->raise();
        enterPassword->raise();
        pushButtonLogin->raise();
        pushButtonCancel->raise();
        label_2->raise();
        pushButton->raise();

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
        label_2->setText(QCoreApplication::translate("Login", "Don't have an account?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
