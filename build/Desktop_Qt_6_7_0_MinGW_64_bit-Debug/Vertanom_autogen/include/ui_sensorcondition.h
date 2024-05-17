/********************************************************************************
** Form generated from reading UI file 'sensorcondition.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSORCONDITION_H
#define UI_SENSORCONDITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_sensorCondition
{
public:
    QLabel *label;

    void setupUi(QDialog *sensorCondition)
    {
        if (sensorCondition->objectName().isEmpty())
            sensorCondition->setObjectName("sensorCondition");
        sensorCondition->resize(693, 414);
        label = new QLabel(sensorCondition);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 691, 411));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/table.png")));
        label->setScaledContents(true);

        retranslateUi(sensorCondition);

        QMetaObject::connectSlotsByName(sensorCondition);
    } // setupUi

    void retranslateUi(QDialog *sensorCondition)
    {
        sensorCondition->setWindowTitle(QCoreApplication::translate("sensorCondition", "Dialog", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class sensorCondition: public Ui_sensorCondition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSORCONDITION_H
