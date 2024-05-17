/********************************************************************************
** Form generated from reading UI file 'aboutus.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTUS_H
#define UI_ABOUTUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_aboutUs
{
public:
    QLabel *label;

    void setupUi(QDialog *aboutUs)
    {
        if (aboutUs->objectName().isEmpty())
            aboutUs->setObjectName("aboutUs");
        aboutUs->resize(843, 573);
        label = new QLabel(aboutUs);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 841, 571));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/aboutUs.png")));
        label->setScaledContents(true);

        retranslateUi(aboutUs);

        QMetaObject::connectSlotsByName(aboutUs);
    } // setupUi

    void retranslateUi(QDialog *aboutUs)
    {
        aboutUs->setWindowTitle(QCoreApplication::translate("aboutUs", "Dialog", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class aboutUs: public Ui_aboutUs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTUS_H
