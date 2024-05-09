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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
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
    QAction *actionUser_profile;
    QAction *actionAbout;
    QAction *actionExit;
    QWidget *centralwidget;
    QLabel *greetingLabel;
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
    QPushButton *reshData;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
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
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLabel *soilMoistureAbnormalCounter;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLabel *pHAbnormalCounter;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QLabel *temperatureAbnormalCounter;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_12;
    QLabel *humidityAbnormalCounter;
    QPushButton *reshCounter;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *sensorValue;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainPage)
    {
        if (MainPage->objectName().isEmpty())
            MainPage->setObjectName("MainPage");
        MainPage->resize(1241, 780);
        MainPage->setStyleSheet(QString::fromUtf8("MainPage{\n"
"background-color: #AA91A9;\n"
"}"));
        actionUser_profile = new QAction(MainPage);
        actionUser_profile->setObjectName("actionUser_profile");
        actionAbout = new QAction(MainPage);
        actionAbout->setObjectName("actionAbout");
        actionExit = new QAction(MainPage);
        actionExit->setObjectName("actionExit");
        centralwidget = new QWidget(MainPage);
        centralwidget->setObjectName("centralwidget");
        greetingLabel = new QLabel(centralwidget);
        greetingLabel->setObjectName("greetingLabel");
        greetingLabel->setGeometry(QRect(30, 30, 371, 41));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        greetingLabel->setFont(font);
        greetingLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 70, 321, 31));
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"}"));
        pH = new QTabWidget(centralwidget);
        pH->setObjectName("pH");
        pH->setGeometry(QRect(490, 150, 391, 401));
        pH->setStyleSheet(QString::fromUtf8("QTabWidget{\n"
"background-color: #FFB6C1;\n"
"font-weight: bold;\n"
" border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 10px;\n"
"   border-color: #800080;\n"
"}"));
        soilMoistureTab = new QWidget();
        soilMoistureTab->setObjectName("soilMoistureTab");
        soilMoistureTable = new QTableView(soilMoistureTab);
        soilMoistureTable->setObjectName("soilMoistureTable");
        soilMoistureTable->setGeometry(QRect(0, 0, 391, 371));
        soilMoistureTable->setStyleSheet(QString::fromUtf8("QTableView{\n"
"background-color: #FFB6C1;\n"
"color: #472F5B;\n"
"font-weight:bold;\n"
"}"));
        pH->addTab(soilMoistureTab, QString());
        phTab = new QWidget();
        phTab->setObjectName("phTab");
        phTable = new QTableView(phTab);
        phTable->setObjectName("phTable");
        phTable->setGeometry(QRect(0, 0, 391, 371));
        phTable->setStyleSheet(QString::fromUtf8("QTableView{\n"
"background-color: #FFB6C1;\n"
"color: #472F5B;\n"
"font-weight:bold;\n"
"}"));
        pH->addTab(phTab, QString());
        temperatureTab = new QWidget();
        temperatureTab->setObjectName("temperatureTab");
        temperatureTable = new QTableView(temperatureTab);
        temperatureTable->setObjectName("temperatureTable");
        temperatureTable->setGeometry(QRect(0, 0, 391, 371));
        temperatureTable->setStyleSheet(QString::fromUtf8("QTableView{\n"
"background-color: #FFB6C1;\n"
"color: #472F5B;\n"
"font-weight:bold;\n"
"}"));
        pH->addTab(temperatureTab, QString());
        humidityTab = new QWidget();
        humidityTab->setObjectName("humidityTab");
        humidityTable = new QTableView(humidityTab);
        humidityTable->setObjectName("humidityTable");
        humidityTable->setGeometry(QRect(0, 0, 391, 371));
        humidityTable->setStyleSheet(QString::fromUtf8("QTableView{\n"
"background-color: #FFB6C1;\n"
"color: #472F5B;\n"
"font-weight:bold;\n"
"}"));
        pH->addTab(humidityTab, QString());
        reshData = new QPushButton(centralwidget);
        reshData->setObjectName("reshData");
        reshData->setGeometry(QRect(490, 560, 391, 32));
        reshData->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #FFB6C1;\n"
"background-color: #472F5B;\n"
"font-weight: bold;\n"
" border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 10px;\n"
"   border-color: #800080;\n"
"}"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(890, 140, 261, 151));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: #FFB6C1;\n"
" border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 20px;\n"
"   border-color: #800080;\n"
"}"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName("formLayout");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_14 = new QLabel(groupBox);
        label_14->setObjectName("label_14");
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        label_14->setFont(font2);
        label_14->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"}"));

        verticalLayout_7->addWidget(label_14);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_15 = new QLabel(groupBox);
        label_15->setObjectName("label_15");
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        label_15->setFont(font3);
        label_15->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_6->addWidget(label_15);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName("label_16");
        label_16->setFont(font3);
        label_16->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_6->addWidget(label_16);


        verticalLayout_7->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_17 = new QLabel(groupBox);
        label_17->setObjectName("label_17");
        label_17->setFont(font3);
        label_17->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_7->addWidget(label_17);

        label_18 = new QLabel(groupBox);
        label_18->setObjectName("label_18");
        label_18->setFont(font3);
        label_18->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_7->addWidget(label_18);


        verticalLayout_7->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_19 = new QLabel(groupBox);
        label_19->setObjectName("label_19");
        label_19->setFont(font3);
        label_19->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_8->addWidget(label_19);

        label_20 = new QLabel(groupBox);
        label_20->setObjectName("label_20");
        label_20->setFont(font3);
        label_20->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_8->addWidget(label_20);


        verticalLayout_7->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_21 = new QLabel(groupBox);
        label_21->setObjectName("label_21");
        label_21->setFont(font3);
        label_21->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_9->addWidget(label_21);

        label_22 = new QLabel(groupBox);
        label_22->setObjectName("label_22");
        label_22->setFont(font3);
        label_22->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_9->addWidget(label_22);


        verticalLayout_7->addLayout(horizontalLayout_9);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout_7);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(20, 350, 461, 261));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: #FFB6C1;\n"
" border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 20px;\n"
"   border-color: #800080;\n"
"}"));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 441, 241));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        QFont font4;
        font4.setPointSize(18);
        font4.setBold(true);
        label_5->setFont(font4);
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"}"));

        verticalLayout_5->addWidget(label_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_2->addWidget(label_6);

        soilMoistureAbnormalCounter = new QLabel(layoutWidget);
        soilMoistureAbnormalCounter->setObjectName("soilMoistureAbnormalCounter");
        soilMoistureAbnormalCounter->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_2->addWidget(soilMoistureAbnormalCounter);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_3->addWidget(label_8);

        pHAbnormalCounter = new QLabel(layoutWidget);
        pHAbnormalCounter->setObjectName("pHAbnormalCounter");
        pHAbnormalCounter->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_3->addWidget(pHAbnormalCounter);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_4->addWidget(label_10);

        temperatureAbnormalCounter = new QLabel(layoutWidget);
        temperatureAbnormalCounter->setObjectName("temperatureAbnormalCounter");
        temperatureAbnormalCounter->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_4->addWidget(temperatureAbnormalCounter);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_5->addWidget(label_12);

        humidityAbnormalCounter = new QLabel(layoutWidget);
        humidityAbnormalCounter->setObjectName("humidityAbnormalCounter");
        humidityAbnormalCounter->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_5->addWidget(humidityAbnormalCounter);


        verticalLayout_4->addLayout(horizontalLayout_5);


        verticalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_6->addLayout(verticalLayout_5);

        reshCounter = new QPushButton(layoutWidget);
        reshCounter->setObjectName("reshCounter");
        reshCounter->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #FFB6C1;\n"
"background-color: #472F5B;\n"
"font-weight: bold;\n"
" border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 10px;\n"
"   border-color: #800080;\n"
"}"));

        verticalLayout_6->addWidget(reshCounter);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(20, 140, 461, 201));
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: #FFB6C1;\n"
" border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 20px;\n"
"   border-color: #800080;\n"
"}"));
        layoutWidget1 = new QWidget(groupBox_3);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 10, 441, 181));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");
        label_3->setFont(font4);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"}"));

        verticalLayout->addWidget(label_3);

        comboBox = new QComboBox(layoutWidget1);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    color: #472F5B;\n"
"    font-weight: bold;\n"
"    background-color: #FFB6C1;\n"
"}\n"
"\n"
""));

        verticalLayout->addWidget(comboBox);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout->addWidget(label_4);

        sensorValue = new QLineEdit(layoutWidget1);
        sensorValue->setObjectName("sensorValue");
        sensorValue->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: #FFB6C1;\n"
"color: #472F5B;\n"
"}"));

        horizontalLayout->addWidget(sensorValue);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #FFB6C1;\n"
"background-color: #472F5B;\n"
"font-weight: bold;\n"
" border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 10px;\n"
"   border-color: #800080;\n"
"}"));

        verticalLayout_3->addWidget(pushButton);

        MainPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1241, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        MainPage->setMenuBar(menubar);
        statusbar = new QStatusBar(MainPage);
        statusbar->setObjectName("statusbar");
        MainPage->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionUser_profile);
        menuFile->addAction(actionAbout);
        menuFile->addSeparator();
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(MainPage);

        pH->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainPage);
    } // setupUi

    void retranslateUi(QMainWindow *MainPage)
    {
        MainPage->setWindowTitle(QCoreApplication::translate("MainPage", "MainWindow", nullptr));
        actionUser_profile->setText(QCoreApplication::translate("MainPage", "User profile", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainPage", "About", nullptr));
        actionExit->setText(QCoreApplication::translate("MainPage", "Exit", nullptr));
        greetingLabel->setText(QCoreApplication::translate("MainPage", "UserName's Vertanom", nullptr));
        label_2->setText(QCoreApplication::translate("MainPage", "Buru-un Iligan City, Lanao del Norte", nullptr));
        pH->setTabText(pH->indexOf(soilMoistureTab), QCoreApplication::translate("MainPage", "Soil Moisture", nullptr));
        pH->setTabText(pH->indexOf(phTab), QCoreApplication::translate("MainPage", "pH", nullptr));
        pH->setTabText(pH->indexOf(temperatureTab), QCoreApplication::translate("MainPage", "Temperature", nullptr));
        pH->setTabText(pH->indexOf(humidityTab), QCoreApplication::translate("MainPage", "Humidity", nullptr));
        reshData->setText(QCoreApplication::translate("MainPage", "Refresh Data", nullptr));
        groupBox->setTitle(QString());
        label_14->setText(QCoreApplication::translate("MainPage", "Lastest Climatic Data", nullptr));
        label_15->setText(QCoreApplication::translate("MainPage", "Soil Moisture:", nullptr));
        label_16->setText(QCoreApplication::translate("MainPage", "<value>", nullptr));
        label_17->setText(QCoreApplication::translate("MainPage", "pH:", nullptr));
        label_18->setText(QCoreApplication::translate("MainPage", "<value>", nullptr));
        label_19->setText(QCoreApplication::translate("MainPage", "Temperature:", nullptr));
        label_20->setText(QCoreApplication::translate("MainPage", "<value>", nullptr));
        label_21->setText(QCoreApplication::translate("MainPage", "Humidity:", nullptr));
        label_22->setText(QCoreApplication::translate("MainPage", "<value>", nullptr));
        groupBox_2->setTitle(QString());
        label_5->setText(QCoreApplication::translate("MainPage", "Abnormal Climatic Parameters", nullptr));
        label_6->setText(QCoreApplication::translate("MainPage", "Soil Moisture:", nullptr));
        soilMoistureAbnormalCounter->setText(QCoreApplication::translate("MainPage", "<value>", nullptr));
        label_8->setText(QCoreApplication::translate("MainPage", "pH", nullptr));
        pHAbnormalCounter->setText(QCoreApplication::translate("MainPage", "<value>", nullptr));
        label_10->setText(QCoreApplication::translate("MainPage", "Temperature:", nullptr));
        temperatureAbnormalCounter->setText(QCoreApplication::translate("MainPage", "<value>", nullptr));
        label_12->setText(QCoreApplication::translate("MainPage", "Humidity", nullptr));
        humidityAbnormalCounter->setText(QCoreApplication::translate("MainPage", "<value>", nullptr));
        reshCounter->setText(QCoreApplication::translate("MainPage", "Refresh Counter", nullptr));
        groupBox_3->setTitle(QString());
        label_3->setText(QCoreApplication::translate("MainPage", "Input Climatic Data Parameter", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainPage", "Soil Moisture", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainPage", "pH", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainPage", "Temperature", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainPage", "Humidity", nullptr));

        label_4->setText(QCoreApplication::translate("MainPage", "Value:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainPage", "Insert Data", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainPage", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainPage: public Ui_MainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
