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
    QLineEdit *username;
    QLineEdit *password;
    QLineEdit *email;
    QPushButton *pushButton;
    QLineEdit *address;
    QLabel *label;
    QLineEdit *firstname;
    QLineEdit *lastname;

    void setupUi(QWidget *detabase)
    {
        if (detabase->objectName().isEmpty())
            detabase->setObjectName("detabase");
        detabase->resize(773, 523);
        username = new QLineEdit(detabase);
        username->setObjectName("username");
        username->setGeometry(QRect(380, 310, 331, 31));
        username->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"   border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 15px;\n"
"   border-color: #800080;\n"
"   color: #800080;\n"
"   background-color: #FFB6C1;\n"
"  padding-left:20px;\n"
"  padding-right:20px;\n"
"}\n"
"\n"
"QLineEdit:Hover{\n"
"  border: 2px solid rgb(170, 85, 127);\n"
"}\n"
""));
        username->setAlignment(Qt::AlignCenter);
        password = new QLineEdit(detabase);
        password->setObjectName("password");
        password->setGeometry(QRect(380, 350, 331, 31));
        password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"   border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 15px;\n"
"   border-color: #800080;\n"
"   color: #800080;\n"
"   background-color: #FFB6C1;\n"
"  padding-left:20px;\n"
"  padding-right:20px;\n"
"}\n"
"\n"
"QLineEdit:Hover{\n"
"  border: 2px solid rgb(170, 85, 127);\n"
"}\n"
""));
        password->setAlignment(Qt::AlignCenter);
        email = new QLineEdit(detabase);
        email->setObjectName("email");
        email->setGeometry(QRect(380, 230, 331, 31));
        email->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"   border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 15px;\n"
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
        email->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(detabase);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(470, 400, 151, 21));
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #FFB6C1;\n"
"background-color: #472F5B;\n"
"font-weight: bold;\n"
" border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 10px;\n"
"   border-color: #800080;\n"
"}"));
        address = new QLineEdit(detabase);
        address->setObjectName("address");
        address->setGeometry(QRect(380, 270, 331, 31));
        address->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"   border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 15px;\n"
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
        address->setAlignment(Qt::AlignCenter);
        label = new QLabel(detabase);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 771, 521));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/veve.png")));
        label->setScaledContents(true);
        firstname = new QLineEdit(detabase);
        firstname->setObjectName("firstname");
        firstname->setGeometry(QRect(380, 190, 161, 31));
        firstname->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"   border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 15px;\n"
"   border-color: #800080;\n"
"   color: #800080;\n"
"   background-color: #FFB6C1;\n"
"  padding-left:20px;\n"
"  padding-right:20px;\n"
"}\n"
"\n"
"QLineEdit:Hover{\n"
"  border: 2px solid rgb(170, 85, 127);\n"
"}\n"
""));
        firstname->setAlignment(Qt::AlignCenter);
        lastname = new QLineEdit(detabase);
        lastname->setObjectName("lastname");
        lastname->setGeometry(QRect(550, 190, 161, 31));
        lastname->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"   border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 15px;\n"
"   border-color: #800080;\n"
"   color: #800080;\n"
"   background-color: #FFB6C1;\n"
"  padding-left:20px;\n"
"  padding-right:20px;\n"
"}\n"
"\n"
"QLineEdit:Hover{\n"
"  border: 2px solid rgb(170, 85, 127);\n"
"}\n"
""));
        lastname->setAlignment(Qt::AlignCenter);
        label->raise();
        username->raise();
        password->raise();
        email->raise();
        pushButton->raise();
        address->raise();
        firstname->raise();
        lastname->raise();

        retranslateUi(detabase);

        QMetaObject::connectSlotsByName(detabase);
    } // setupUi

    void retranslateUi(QWidget *detabase)
    {
        detabase->setWindowTitle(QCoreApplication::translate("detabase", "Form", nullptr));
        username->setText(QString());
        username->setPlaceholderText(QCoreApplication::translate("detabase", "Enter username", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("detabase", "Enter password", nullptr));
        email->setPlaceholderText(QCoreApplication::translate("detabase", "Enter email", nullptr));
        pushButton->setText(QCoreApplication::translate("detabase", "Create your account", nullptr));
        address->setPlaceholderText(QCoreApplication::translate("detabase", "Enter address", nullptr));
        label->setText(QString());
        firstname->setText(QString());
        firstname->setPlaceholderText(QCoreApplication::translate("detabase", "Enter firstname", nullptr));
        lastname->setPlaceholderText(QCoreApplication::translate("detabase", "Enter lastname", nullptr));
    } // retranslateUi

};

namespace Ui {
    class detabase: public Ui_detabase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETABASE_H
