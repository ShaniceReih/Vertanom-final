/********************************************************************************
** Form generated from reading UI file 'mainpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainPage
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QTabWidget *pH;
    QWidget *soilMoistureTab;
    QTableView *soilMoistureTable;
    QWidget *phTab;
    QTableView *phTable;
    QWidget *temperatureTab;
    QTableView *temperatureTable;
    QWidget *humidityTab;
    QTableView *humidityTable;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *sensorValue;
    QPushButton *pushButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *pushButton_2;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_15;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_17;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_19;
    QLabel *label_20;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_21;
    QLabel *label_22;
    QPushButton *refreshData;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainPage)
    {
        if (MainPage->objectName().isEmpty())
            MainPage->setObjectName("MainPage");
        MainPage->resize(1209, 689);
        MainPage->setStyleSheet(QString::fromUtf8("MainPage{\n"
"background-color: #013120;\n"
"}"));
        centralwidget = new QWidget(MainPage);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 30, 371, 41));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 70, 321, 31));
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);
        pH = new QTabWidget(centralwidget);
        pH->setObjectName("pH");
        pH->setGeometry(QRect(490, 150, 381, 401));
        soilMoistureTab = new QWidget();
        soilMoistureTab->setObjectName("soilMoistureTab");
        soilMoistureTable = new QTableView(soilMoistureTab);
        soilMoistureTable->setObjectName("soilMoistureTable");
        soilMoistureTable->setGeometry(QRect(0, 0, 381, 371));
        pH->addTab(soilMoistureTab, QString());
        phTab = new QWidget();
        phTab->setObjectName("phTab");
        phTable = new QTableView(phTab);
        phTable->setObjectName("phTable");
        phTable->setGeometry(QRect(0, 0, 381, 371));
        pH->addTab(phTab, QString());
        temperatureTab = new QWidget();
        temperatureTab->setObjectName("temperatureTab");
        temperatureTable = new QTableView(temperatureTab);
        temperatureTable->setObjectName("temperatureTable");
        temperatureTable->setGeometry(QRect(0, 0, 381, 371));
        pH->addTab(temperatureTab, QString());
        humidityTab = new QWidget();
        humidityTab->setObjectName("humidityTab");
        humidityTable = new QTableView(humidityTab);
        humidityTable->setObjectName("humidityTable");
        humidityTable->setGeometry(QRect(0, 0, 381, 371));
        pH->addTab(humidityTab, QString());
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 150, 441, 181));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        label_3->setFont(font2);

        verticalLayout->addWidget(label_3);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(comboBox);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        sensorValue = new QLineEdit(layoutWidget);
        sensorValue->setObjectName("sensorValue");

        horizontalLayout->addWidget(sensorValue);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout_3->addWidget(pushButton);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(30, 350, 441, 198));
        verticalLayout_6 = new QVBoxLayout(layoutWidget1);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");
        label_5->setFont(font2);

        verticalLayout_5->addWidget(label_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName("label_6");

        horizontalLayout_2->addWidget(label_6);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName("label_7");

        horizontalLayout_2->addWidget(label_7);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName("label_8");

        horizontalLayout_3->addWidget(label_8);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName("label_9");

        horizontalLayout_3->addWidget(label_9);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName("label_10");

        horizontalLayout_4->addWidget(label_10);

        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName("label_11");

        horizontalLayout_4->addWidget(label_11);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName("label_12");

        horizontalLayout_5->addWidget(label_12);

        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName("label_13");

        horizontalLayout_5->addWidget(label_13);


        verticalLayout_4->addLayout(horizontalLayout_5);


        verticalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_6->addLayout(verticalLayout_5);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_6->addWidget(pushButton_2);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(890, 150, 301, 217));
        QFont font3;
        font3.setPointSize(9);
        layoutWidget2->setFont(font3);
        verticalLayout_7 = new QVBoxLayout(layoutWidget2);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget2);
        label_14->setObjectName("label_14");
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        label_14->setFont(font4);

        verticalLayout_7->addWidget(label_14);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_15 = new QLabel(layoutWidget2);
        label_15->setObjectName("label_15");
        QFont font5;
        font5.setPointSize(9);
        font5.setBold(false);
        label_15->setFont(font5);

        horizontalLayout_6->addWidget(label_15);

        label_16 = new QLabel(layoutWidget2);
        label_16->setObjectName("label_16");
        label_16->setFont(font5);

        horizontalLayout_6->addWidget(label_16);


        verticalLayout_7->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_17 = new QLabel(layoutWidget2);
        label_17->setObjectName("label_17");
        label_17->setFont(font5);

        horizontalLayout_7->addWidget(label_17);

        label_18 = new QLabel(layoutWidget2);
        label_18->setObjectName("label_18");
        label_18->setFont(font5);

        horizontalLayout_7->addWidget(label_18);


        verticalLayout_7->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_19 = new QLabel(layoutWidget2);
        label_19->setObjectName("label_19");
        label_19->setFont(font5);

        horizontalLayout_8->addWidget(label_19);

        label_20 = new QLabel(layoutWidget2);
        label_20->setObjectName("label_20");
        label_20->setFont(font5);

        horizontalLayout_8->addWidget(label_20);


        verticalLayout_7->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_21 = new QLabel(layoutWidget2);
        label_21->setObjectName("label_21");
        label_21->setFont(font5);

        horizontalLayout_9->addWidget(label_21);

        label_22 = new QLabel(layoutWidget2);
        label_22->setObjectName("label_22");
        label_22->setFont(font5);

        horizontalLayout_9->addWidget(label_22);


        verticalLayout_7->addLayout(horizontalLayout_9);

        refreshData = new QPushButton(centralwidget);
        refreshData->setObjectName("refreshData");
        refreshData->setGeometry(QRect(480, 560, 391, 32));
        MainPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1362, 24));
        MainPage->setMenuBar(menubar);
        statusbar = new QStatusBar(MainPage);
        statusbar->setObjectName("statusbar");
        MainPage->setStatusBar(statusbar);

        retranslateUi(MainPage);

        pH->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainPage);
    } // setupUi

    void retranslateUi(QMainWindow *MainPage)
    {
        MainPage->setWindowTitle(QCoreApplication::translate("MainPage", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainPage", "UserName's Vertanom", nullptr));
        label_2->setText(QCoreApplication::translate("MainPage", "Buru-un Iligan City, Lanao del Norte", nullptr));
        pH->setTabText(pH->indexOf(soilMoistureTab), QCoreApplication::translate("MainPage", "Soil Moisture", nullptr));
        pH->setTabText(pH->indexOf(phTab), QCoreApplication::translate("MainPage", "pH", nullptr));
        pH->setTabText(pH->indexOf(temperatureTab), QCoreApplication::translate("MainPage", "Temperature", nullptr));
        pH->setTabText(pH->indexOf(humidityTab), QCoreApplication::translate("MainPage", "Humidity", nullptr));
        label_3->setText(QCoreApplication::translate("MainPage", "Input Climatic Data Parameter", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainPage", "Soil Moisture", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainPage", "pH", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainPage", "Temperature", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainPage", "Humidity", nullptr));

        label_4->setText(QCoreApplication::translate("MainPage", "Value:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainPage", "Insert Data", nullptr));
        label_5->setText(QCoreApplication::translate("MainPage", "Abnormal Climatic Parameters", nullptr));
        label_6->setText(QCoreApplication::translate("MainPage", "Soil Moisture:", nullptr));
        label_7->setText(QCoreApplication::translate("MainPage", "<value>", nullptr));
        label_8->setText(QCoreApplication::translate("MainPage", "pH", nullptr));
        label_9->setText(QCoreApplication::translate("MainPage", "<value>", nullptr));
        label_10->setText(QCoreApplication::translate("MainPage", "Temperature:", nullptr));
        label_11->setText(QCoreApplication::translate("MainPage", "<value>", nullptr));
        label_12->setText(QCoreApplication::translate("MainPage", "Humidity", nullptr));
        label_13->setText(QCoreApplication::translate("MainPage", "<value>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainPage", "Refresh Counter", nullptr));
        label_14->setText(QCoreApplication::translate("MainPage", "Lastest Climatic Data", nullptr));
        label_15->setText(QCoreApplication::translate("MainPage", "Soil Moisture:", nullptr));
        label_16->setText(QCoreApplication::translate("MainPage", "<value>", nullptr));
        label_17->setText(QCoreApplication::translate("MainPage", "pH:", nullptr));
        label_18->setText(QCoreApplication::translate("MainPage", "<value>", nullptr));
        label_19->setText(QCoreApplication::translate("MainPage", "Temperature:", nullptr));
        label_20->setText(QCoreApplication::translate("MainPage", "<value>", nullptr));
        label_21->setText(QCoreApplication::translate("MainPage", "Humidity:", nullptr));
        label_22->setText(QCoreApplication::translate("MainPage", "<value>", nullptr));
        refreshData->setText(QCoreApplication::translate("MainPage", "Refresh Data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainPage: public Ui_MainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
