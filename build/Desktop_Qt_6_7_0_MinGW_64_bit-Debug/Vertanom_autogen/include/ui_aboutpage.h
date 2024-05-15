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

QT_BEGIN_NAMESPACE

class Ui_AboutPage
{
public:
    QLabel *label;

    void setupUi(QDialog *AboutPage)
    {
        if (AboutPage->objectName().isEmpty())
            AboutPage->setObjectName("AboutPage");
        AboutPage->resize(455, 468);
        label = new QLabel(AboutPage);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 451, 461));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/aboutpagee.png")));
        label->setScaledContents(true);

        retranslateUi(AboutPage);

        QMetaObject::connectSlotsByName(AboutPage);
    } // setupUi

    void retranslateUi(QDialog *AboutPage)
    {
        AboutPage->setWindowTitle(QCoreApplication::translate("AboutPage", "Dialog", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AboutPage: public Ui_AboutPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTPAGE_H
