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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
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
    QLabel *label_14;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_23;
    QLabel *currentTime;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_15;
    QLabel *soilMoistureLatest;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_21;
    QLabel *humidityLatest;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_19;
    QLabel *temperatureLatest;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_17;
    QLabel *phLatest;
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
    QScrollBar *verticalScrollBar;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainPage)
    {
        if (MainPage->objectName().isEmpty())
            MainPage->setObjectName("MainPage");
        MainPage->resize(1202, 826);
        QFont font;
        font.setPointSize(10);
        MainPage->setFont(font);
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
        greetingLabel->setGeometry(QRect(20, 20, 371, 41));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        greetingLabel->setFont(font1);
        greetingLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 60, 321, 31));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"}"));
        pH = new QTabWidget(centralwidget);
        pH->setObjectName("pH");
        pH->setGeometry(QRect(500, 110, 641, 611));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        pH->setFont(font2);
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
        soilMoistureTable->setGeometry(QRect(0, 0, 641, 571));
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
        phTable->setGeometry(QRect(0, 0, 641, 571));
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
        temperatureTable->setGeometry(QRect(0, 0, 641, 571));
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
        humidityTable->setGeometry(QRect(0, 0, 641, 571));
        humidityTable->setStyleSheet(QString::fromUtf8("QTableView{\n"
"background-color: #FFB6C1;\n"
"color: #472F5B;\n"
"font-weight:bold;\n"
"}"));
        pH->addTab(humidityTab, QString());
        reshData = new QPushButton(centralwidget);
        reshData->setObjectName("reshData");
        reshData->setGeometry(QRect(630, 730, 391, 32));
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
        groupBox->setGeometry(QRect(20, 550, 461, 211));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: #FFB6C1;\n"
" border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 20px;\n"
"   border-color: #800080;\n"
"}"));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(20, 10, 224, 31));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        label_14->setFont(font3);
        label_14->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"}"));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 40, 114, 16));
        horizontalLayout_6 = new QHBoxLayout(widget);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(widget);
        label_23->setObjectName("label_23");
        QFont font4;
        font4.setPointSize(6);
        font4.setBold(true);
        label_23->setFont(font4);
        label_23->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_6->addWidget(label_23);

        currentTime = new QLabel(widget);
        currentTime->setObjectName("currentTime");
        currentTime->setFont(font4);
        currentTime->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_6->addWidget(currentTime);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(22, 80, 421, 22));
        horizontalLayout_7 = new QHBoxLayout(widget1);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(widget1);
        label_15->setObjectName("label_15");
        QFont font5;
        font5.setPointSize(9);
        font5.setBold(true);
        label_15->setFont(font5);
        label_15->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_7->addWidget(label_15);

        soilMoistureLatest = new QLabel(widget1);
        soilMoistureLatest->setObjectName("soilMoistureLatest");
        soilMoistureLatest->setFont(font5);
        soilMoistureLatest->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_7->addWidget(soilMoistureLatest);

        widget2 = new QWidget(groupBox);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(22, 160, 421, 22));
        horizontalLayout_10 = new QHBoxLayout(widget2);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(widget2);
        label_21->setObjectName("label_21");
        label_21->setFont(font5);
        label_21->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_10->addWidget(label_21);

        humidityLatest = new QLabel(widget2);
        humidityLatest->setObjectName("humidityLatest");
        humidityLatest->setFont(font5);
        humidityLatest->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_10->addWidget(humidityLatest);

        widget3 = new QWidget(groupBox);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(23, 131, 421, 22));
        horizontalLayout_9 = new QHBoxLayout(widget3);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(widget3);
        label_19->setObjectName("label_19");
        label_19->setFont(font5);
        label_19->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_9->addWidget(label_19);

        temperatureLatest = new QLabel(widget3);
        temperatureLatest->setObjectName("temperatureLatest");
        temperatureLatest->setFont(font5);
        temperatureLatest->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_9->addWidget(temperatureLatest);

        widget4 = new QWidget(groupBox);
        widget4->setObjectName("widget4");
        widget4->setGeometry(QRect(23, 109, 421, 22));
        horizontalLayout_8 = new QHBoxLayout(widget4);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(widget4);
        label_17->setObjectName("label_17");
        label_17->setFont(font5);
        label_17->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_8->addWidget(label_17);

        phLatest = new QLabel(widget4);
        phLatest->setObjectName("phLatest");
        phLatest->setFont(font5);
        phLatest->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_8->addWidget(phLatest);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(20, 320, 461, 221));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: #FFB6C1;\n"
" border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 20px;\n"
"   border-color: #800080;\n"
"}"));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 432, 193));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        QFont font6;
        font6.setPointSize(18);
        font6.setBold(true);
        label_5->setFont(font6);
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
        groupBox_3->setGeometry(QRect(20, 110, 461, 201));
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
        label_3->setFont(font6);
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

        verticalScrollBar = new QScrollBar(centralwidget);
        verticalScrollBar->setObjectName("verticalScrollBar");
        verticalScrollBar->setGeometry(QRect(1179, 20, 21, 741));
        verticalScrollBar->setStyleSheet(QString::fromUtf8("QScrollBar::vertical{\n"
"background-color: #472F5B;\n"
"}"));
        verticalScrollBar->setOrientation(Qt::Vertical);
        MainPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1202, 25));
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

        pH->setCurrentIndex(1);


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
        label_23->setText(QCoreApplication::translate("MainPage", "Updated as of ", nullptr));
        currentTime->setText(QCoreApplication::translate("MainPage", "<value>", nullptr));
        label_15->setText(QCoreApplication::translate("MainPage", "Soil Moisture:", nullptr));
        soilMoistureLatest->setText(QCoreApplication::translate("MainPage", " <value>", nullptr));
        label_21->setText(QCoreApplication::translate("MainPage", "Humidity:", nullptr));
        humidityLatest->setText(QCoreApplication::translate("MainPage", " <value>", nullptr));
        label_19->setText(QCoreApplication::translate("MainPage", "Temperature:", nullptr));
        temperatureLatest->setText(QCoreApplication::translate("MainPage", "<value>", nullptr));
        label_17->setText(QCoreApplication::translate("MainPage", "pH:", nullptr));
        phLatest->setText(QCoreApplication::translate("MainPage", " <value>", nullptr));
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
