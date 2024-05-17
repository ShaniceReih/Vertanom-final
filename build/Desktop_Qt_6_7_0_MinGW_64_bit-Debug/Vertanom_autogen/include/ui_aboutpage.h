/********************************************************************************
** Form generated from reading UI file 'aboutpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTPAGE_H
#define UI_ABOUTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AboutPage
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *AboutPage)
    {
        if (AboutPage->objectName().isEmpty())
            AboutPage->setObjectName("AboutPage");
        AboutPage->resize(493, 516);
        label = new QLabel(AboutPage);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 491, 511));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/vertabout.png")));
        label->setScaledContents(true);
        pushButton = new QPushButton(AboutPage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 450, 161, 21));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #FFB6C1;\n"
"background-color: #472F5B;\n"
"font-weight: bold;\n"
" border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 10px;\n"
"   border-color: #800080;\n"
"}"));
        pushButton->setFlat(true);

        retranslateUi(AboutPage);

        QMetaObject::connectSlotsByName(AboutPage);
    } // setupUi

    void retranslateUi(QDialog *AboutPage)
    {
        AboutPage->setWindowTitle(QCoreApplication::translate("AboutPage", "Dialog", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("AboutPage", "About the Developers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutPage: public Ui_AboutPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTPAGE_H
