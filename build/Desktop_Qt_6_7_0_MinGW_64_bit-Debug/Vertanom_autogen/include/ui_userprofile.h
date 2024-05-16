/********************************************************************************
** Form generated from reading UI file 'userprofile.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPROFILE_H
#define UI_USERPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_UserProfile
{
public:
    QLabel *label;
    QLabel *FULLNAME;
    QLabel *EMAIL;
    QLabel *ADDRESS;
    QLabel *USERNAME;
    QLabel *PASSWORD;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QDialog *UserProfile)
    {
        if (UserProfile->objectName().isEmpty())
            UserProfile->setObjectName("UserProfile");
        UserProfile->resize(492, 523);
        label = new QLabel(UserProfile);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 491, 521));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/profilepage (2).png")));
        label->setScaledContents(true);
        FULLNAME = new QLabel(UserProfile);
        FULLNAME->setObjectName("FULLNAME");
        FULLNAME->setGeometry(QRect(70, 200, 361, 41));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        FULLNAME->setFont(font);
        FULLNAME->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 20px;\n"
"   border-color: #800080;\n"
"   color: #800080;\n"
"   background-color: #FFB6C1;\n"
"  padding-left:80px;\n"
"  padding-right:89px;\n"
"}\n"
"\n"
"QLabel:Hover{\n"
"  border: 2px solid rgb(170, 85, 127);\n"
"}\n"
""));
        FULLNAME->setAlignment(Qt::AlignCenter);
        EMAIL = new QLabel(UserProfile);
        EMAIL->setObjectName("EMAIL");
        EMAIL->setGeometry(QRect(70, 260, 361, 41));
        EMAIL->setFont(font);
        EMAIL->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 20px;\n"
"   border-color: #800080;\n"
"   color: #800080;\n"
"   background-color: #FFB6C1;\n"
"  padding-left:50px;\n"
"  padding-right:50px;\n"
"}\n"
"\n"
"QLabel:Hover{\n"
"  border: 2px solid rgb(170, 85, 127);\n"
"}\n"
""));
        EMAIL->setAlignment(Qt::AlignCenter);
        ADDRESS = new QLabel(UserProfile);
        ADDRESS->setObjectName("ADDRESS");
        ADDRESS->setGeometry(QRect(70, 320, 361, 41));
        ADDRESS->setFont(font);
        ADDRESS->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 20px;\n"
"   border-color: #800080;\n"
"   color: #800080;\n"
"   background-color: #FFB6C1;\n"
"  padding-left:80px;\n"
"  padding-right:89px;\n"
"}\n"
"\n"
"QLabel:Hover{\n"
"  border: 2px solid rgb(170, 85, 127);\n"
"}\n"
""));
        ADDRESS->setAlignment(Qt::AlignCenter);
        USERNAME = new QLabel(UserProfile);
        USERNAME->setObjectName("USERNAME");
        USERNAME->setGeometry(QRect(70, 380, 361, 41));
        USERNAME->setFont(font);
        USERNAME->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 20px;\n"
"   border-color: #800080;\n"
"   color: #800080;\n"
"   background-color: #FFB6C1;\n"
"  padding-left:80px;\n"
"  padding-right:89px;\n"
"}\n"
"\n"
"QLabel:Hover{\n"
"  border: 2px solid rgb(170, 85, 127);\n"
"}\n"
""));
        USERNAME->setAlignment(Qt::AlignCenter);
        PASSWORD = new QLabel(UserProfile);
        PASSWORD->setObjectName("PASSWORD");
        PASSWORD->setGeometry(QRect(70, 440, 361, 41));
        PASSWORD->setFont(font);
        PASSWORD->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 20px;\n"
"   border-color: #800080;\n"
"   color: #800080;\n"
"   background-color: #FFB6C1;\n"
"  padding-left:80px;\n"
"  padding-right:89px;\n"
"}\n"
"\n"
"QLabel:Hover{\n"
"  border: 2px solid rgb(170, 85, 127);\n"
"}\n"
""));
        PASSWORD->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(UserProfile);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 190, 71, 21));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setItalic(true);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 20px;\n"
"   border-color: #800080;\n"
"   color: #800080;\n"
"   background-color: #FFB6C1;\n"
"}\n"
""));
        label_4->setFrameShape(QFrame::VLine);
        label_4->setFrameShadow(QFrame::Sunken);
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(UserProfile);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(80, 250, 71, 21));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 20px;\n"
"   border-color: #800080;\n"
"   color: #800080;\n"
"   background-color: #FFB6C1;\n"
"}\n"
""));
        label_5->setFrameShape(QFrame::VLine);
        label_5->setFrameShadow(QFrame::Sunken);
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(UserProfile);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(80, 310, 71, 21));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 20px;\n"
"   border-color: #800080;\n"
"   color: #800080;\n"
"   background-color: #FFB6C1;\n"
"}\n"
""));
        label_6->setFrameShape(QFrame::VLine);
        label_6->setFrameShadow(QFrame::Sunken);
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(UserProfile);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(80, 430, 71, 21));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 20px;\n"
"   border-color: #800080;\n"
"   color: #800080;\n"
"   background-color: #FFB6C1;\n"
"}\n"
""));
        label_7->setFrameShape(QFrame::VLine);
        label_7->setFrameShadow(QFrame::Sunken);
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(UserProfile);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(80, 370, 71, 21));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 20px;\n"
"   border-color: #800080;\n"
"   color: #800080;\n"
"   background-color: #FFB6C1;\n"
"}\n"
""));
        label_8->setFrameShape(QFrame::VLine);
        label_8->setFrameShadow(QFrame::Sunken);
        label_8->setAlignment(Qt::AlignCenter);

        retranslateUi(UserProfile);

        QMetaObject::connectSlotsByName(UserProfile);
    } // setupUi

    void retranslateUi(QDialog *UserProfile)
    {
        UserProfile->setWindowTitle(QCoreApplication::translate("UserProfile", "Dialog", nullptr));
        label->setText(QString());
        FULLNAME->setText(QString());
        EMAIL->setText(QString());
        ADDRESS->setText(QString());
        USERNAME->setText(QString());
        PASSWORD->setText(QString());
        label_4->setText(QCoreApplication::translate("UserProfile", "Full Name", nullptr));
        label_5->setText(QCoreApplication::translate("UserProfile", "Email", nullptr));
        label_6->setText(QCoreApplication::translate("UserProfile", "Address", nullptr));
        label_7->setText(QCoreApplication::translate("UserProfile", "Password", nullptr));
        label_8->setText(QCoreApplication::translate("UserProfile", "Username", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserProfile: public Ui_UserProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPROFILE_H
