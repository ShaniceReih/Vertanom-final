/********************************************************************************
** Form generated from reading UI file 'detabase.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETABASE_H
#define UI_DETABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_detabase
{
public:
    QLabel *label;
    QLineEdit *fullname;
    QLineEdit *username;
    QLineEdit *password;
    QLineEdit *email;
    QPushButton *pushButton;
    QLineEdit *address;

    void setupUi(QWidget *detabase)
    {
        if (detabase->objectName().isEmpty())
            detabase->setObjectName("detabase");
        detabase->resize(464, 478);
        label = new QLabel(detabase);
        label->setObjectName("label");
        label->setGeometry(QRect(12, 9, 441, 451));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/signuppage.png")));
        label->setScaledContents(true);
        fullname = new QLineEdit(detabase);
        fullname->setObjectName("fullname");
        fullname->setGeometry(QRect(90, 130, 281, 41));
        fullname->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"   border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 20px;\n"
"   border-color: #800080;\n"
"   color: #800080;\n"
"   background-color: #FFB6C1;\n"
"  padding-left:85px;\n"
"  padding-right:50px;\n"
"}\n"
"\n"
"QLineEdit:Hover{\n"
"  border: 2px solid rgb(170, 85, 127);\n"
"}\n"
""));
        fullname->setDragEnabled(false);
        fullname->setReadOnly(false);
        username = new QLineEdit(detabase);
        username->setObjectName("username");
        username->setGeometry(QRect(90, 280, 281, 41));
        username->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"   border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 20px;\n"
"   border-color: #800080;\n"
"   color: #800080;\n"
"   background-color: #FFB6C1;\n"
"  padding-left:85px;\n"
"  padding-right:50px;\n"
"}\n"
"\n"
"QLineEdit:Hover{\n"
"  border: 2px solid rgb(170, 85, 127);\n"
"}\n"
""));
        password = new QLineEdit(detabase);
        password->setObjectName("password");
        password->setGeometry(QRect(90, 330, 281, 41));
        password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"   border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 20px;\n"
"   border-color: #800080;\n"
"   color: #800080;\n"
"   background-color: #FFB6C1;\n"
"  padding-left:85px;\n"
"  padding-right:50px;\n"
"}\n"
"\n"
"QLineEdit:Hover{\n"
"  border: 2px solid rgb(170, 85, 127);\n"
"}\n"
""));
        email = new QLineEdit(detabase);
        email->setObjectName("email");
        email->setGeometry(QRect(90, 180, 281, 41));
        email->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"   border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 20px;\n"
"   border-color: #800080;\n"
"   color: #800080;\n"
"   background-color: #FFB6C1;\n"
"  padding-left:95px;\n"
"  padding-right:50px;\n"
"}\n"
"\n"
"QLineEdit:Hover{\n"
"  border: 2px solid rgb(170, 85, 127);\n"
"}\n"
""));
        pushButton = new QPushButton(detabase);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(190, 390, 83, 29));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 13px;\n"
"   border-color: #800080;\n"
"   color: #800080;\n"
"   background-color: #FFB6C1;\n"
"}\n"
"\n"
"QPushButton:Hover{\n"
"  border: 2px solid rgb(170, 85, 127);\n"
"}\n"
"\n"
"\n"
""));
        address = new QLineEdit(detabase);
        address->setObjectName("address");
        address->setGeometry(QRect(90, 230, 281, 41));
        address->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"   border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 20px;\n"
"   border-color: #800080;\n"
"   color: #800080;\n"
"   background-color: #FFB6C1;\n"
"  padding-left:85px;\n"
"  padding-right:50px;\n"
"}\n"
"\n"
"QLineEdit:Hover{\n"
"  border: 2px solid rgb(170, 85, 127);\n"
"}\n"
""));

        retranslateUi(detabase);

        QMetaObject::connectSlotsByName(detabase);
    } // setupUi

    void retranslateUi(QWidget *detabase)
    {
        detabase->setWindowTitle(QCoreApplication::translate("detabase", "Form", nullptr));
        label->setText(QString());
        fullname->setPlaceholderText(QCoreApplication::translate("detabase", "Enter full name", nullptr));
        username->setText(QString());
        username->setPlaceholderText(QCoreApplication::translate("detabase", "Enter username", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("detabase", "Enter password", nullptr));
        email->setPlaceholderText(QCoreApplication::translate("detabase", "Enter email", nullptr));
        pushButton->setText(QCoreApplication::translate("detabase", "Sign up", nullptr));
        address->setPlaceholderText(QCoreApplication::translate("detabase", "Enter address", nullptr));
    } // retranslateUi

};

namespace Ui {
    class detabase: public Ui_detabase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETABASE_H
