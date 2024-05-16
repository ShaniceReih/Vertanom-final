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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QLabel *FIRSTNAME;
    QLabel *addRess;
    QTabWidget *tabWidget;
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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_15;
    QLabel *soilMoistureLatest;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_21;
    QLabel *humidityLatest;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_19;
    QLabel *temperatureLatest;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_17;
    QLabel *phLatest;
    QFrame *line;
    QLabel *label_23;
    QLabel *currentTime;
    QGroupBox *groupBox_2;
    QFrame *line_2;
    QPushButton *reshCounter;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QLabel *temperatureAbnormalCounter;
    QLabel *label_5;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLabel *pHAbnormalCounter;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_12;
    QLabel *humidityAbnormalCounter;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLabel *soilMoistureAbnormalCounter;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget8;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *sensorValue;
    QPushButton *pushButton;
    QGroupBox *groupBox_4;
    QLabel *label_16;
    QLineEdit *editSensorValue;
    QPushButton *updateButton;
    QPushButton *deleteEntry;
    QPushButton *logoutButton;
    QWidget *layoutWidget9;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *userButton;
    QPushButton *aboutButton;
    QLabel *label;
    QPushButton *reshData_2;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainPage)
    {
        if (MainPage->objectName().isEmpty())
            MainPage->setObjectName("MainPage");
        MainPage->resize(1197, 737);
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
        FIRSTNAME = new QLabel(centralwidget);
        FIRSTNAME->setObjectName("FIRSTNAME");
        FIRSTNAME->setGeometry(QRect(21, 11, 521, 63));
        QFont font1;
        font1.setPointSize(28);
        font1.setBold(true);
        FIRSTNAME->setFont(font1);
        FIRSTNAME->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"}"));
        addRess = new QLabel(centralwidget);
        addRess->setObjectName("addRess");
        addRess->setGeometry(QRect(30, 60, 321, 31));
        addRess->setFont(font);
        addRess->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"}"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(500, 140, 641, 331));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        tabWidget->setFont(font2);
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget{\n"
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
        tabWidget->addTab(soilMoistureTab, QString());
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
        tabWidget->addTab(phTab, QString());
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
        tabWidget->addTab(temperatureTab, QString());
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
        tabWidget->addTab(humidityTab, QString());
        reshData = new QPushButton(centralwidget);
        reshData->setObjectName("reshData");
        reshData->setGeometry(QRect(500, 480, 641, 21));
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
        groupBox->setGeometry(QRect(500, 510, 641, 191));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: #FFB6C1;\n"
" border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 20px;\n"
"   border-color: #800080;\n"
"}"));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(20, 10, 311, 31));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        label_14->setFont(font3);
        label_14->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"}"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(22, 80, 421, 22));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName("label_15");
        QFont font4;
        font4.setPointSize(9);
        font4.setBold(true);
        label_15->setFont(font4);
        label_15->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_7->addWidget(label_15);

        soilMoistureLatest = new QLabel(layoutWidget);
        soilMoistureLatest->setObjectName("soilMoistureLatest");
        soilMoistureLatest->setFont(font4);
        soilMoistureLatest->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_7->addWidget(soilMoistureLatest);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(22, 160, 421, 26));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(layoutWidget1);
        label_21->setObjectName("label_21");
        label_21->setFont(font4);
        label_21->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_10->addWidget(label_21);

        humidityLatest = new QLabel(layoutWidget1);
        humidityLatest->setObjectName("humidityLatest");
        humidityLatest->setFont(font4);
        humidityLatest->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_10->addWidget(humidityLatest);

        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(23, 131, 421, 22));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(layoutWidget2);
        label_19->setObjectName("label_19");
        label_19->setFont(font4);
        label_19->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_9->addWidget(label_19);

        temperatureLatest = new QLabel(layoutWidget2);
        temperatureLatest->setObjectName("temperatureLatest");
        temperatureLatest->setFont(font4);
        temperatureLatest->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_9->addWidget(temperatureLatest);

        layoutWidget3 = new QWidget(groupBox);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(23, 109, 421, 22));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget3);
        label_17->setObjectName("label_17");
        label_17->setFont(font4);
        label_17->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_8->addWidget(label_17);

        phLatest = new QLabel(layoutWidget3);
        phLatest->setObjectName("phLatest");
        phLatest->setFont(font4);
        phLatest->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout_8->addWidget(phLatest);

        line = new QFrame(groupBox);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 60, 631, 16));
        line->setStyleSheet(QString::fromUtf8("color: #472F5B;"));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        label_23 = new QLabel(groupBox);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(22, 41, 91, 17));
        QFont font5;
        font5.setPointSize(8);
        font5.setBold(true);
        font5.setItalic(true);
        label_23->setFont(font5);
        label_23->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));
        currentTime = new QLabel(groupBox);
        currentTime->setObjectName("currentTime");
        currentTime->setGeometry(QRect(100, 40, 211, 17));
        currentTime->setFont(font5);
        currentTime->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(20, 490, 461, 211));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: #FFB6C1;\n"
" border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 20px;\n"
"   border-color: #800080;\n"
"}"));
        line_2 = new QFrame(groupBox_2);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(0, 50, 461, 16));
        line_2->setStyleSheet(QString::fromUtf8("color: #472F5B;"));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        reshCounter = new QPushButton(groupBox_2);
        reshCounter->setObjectName("reshCounter");
        reshCounter->setGeometry(QRect(10, 180, 441, 24));
        reshCounter->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #FFB6C1;\n"
"background-color: #472F5B;\n"
"font-weight: bold;\n"
" border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 10px;\n"
"   border-color: #800080;\n"
"}"));
        layoutWidget4 = new QWidget(groupBox_2);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(10, 120, 431, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget4);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_10);

        temperatureAbnormalCounter = new QLabel(layoutWidget4);
        temperatureAbnormalCounter->setObjectName("temperatureAbnormalCounter");
        temperatureAbnormalCounter->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));
        temperatureAbnormalCounter->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(temperatureAbnormalCounter);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(12, 12, 428, 40));
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"}"));
        label_5->setAlignment(Qt::AlignCenter);
        layoutWidget5 = new QWidget(groupBox_2);
        layoutWidget5->setObjectName("layoutWidget5");
        layoutWidget5->setGeometry(QRect(10, 90, 431, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget5);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_8);

        pHAbnormalCounter = new QLabel(layoutWidget5);
        pHAbnormalCounter->setObjectName("pHAbnormalCounter");
        pHAbnormalCounter->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));
        pHAbnormalCounter->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(pHAbnormalCounter);

        layoutWidget6 = new QWidget(groupBox_2);
        layoutWidget6->setObjectName("layoutWidget6");
        layoutWidget6->setGeometry(QRect(10, 150, 431, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget6);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_12);

        humidityAbnormalCounter = new QLabel(layoutWidget6);
        humidityAbnormalCounter->setObjectName("humidityAbnormalCounter");
        humidityAbnormalCounter->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));
        humidityAbnormalCounter->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(humidityAbnormalCounter);

        layoutWidget7 = new QWidget(groupBox_2);
        layoutWidget7->setObjectName("layoutWidget7");
        layoutWidget7->setGeometry(QRect(10, 60, 431, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget7);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_6);

        soilMoistureAbnormalCounter = new QLabel(layoutWidget7);
        soilMoistureAbnormalCounter->setObjectName("soilMoistureAbnormalCounter");
        soilMoistureAbnormalCounter->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));
        soilMoistureAbnormalCounter->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(soilMoistureAbnormalCounter);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(20, 140, 461, 171));
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: #FFB6C1;\n"
" border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 20px;\n"
"   border-color: #800080;\n"
"}"));
        layoutWidget8 = new QWidget(groupBox_3);
        layoutWidget8->setObjectName("layoutWidget8");
        layoutWidget8->setGeometry(QRect(10, 10, 441, 151));
        verticalLayout_3 = new QVBoxLayout(layoutWidget8);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(layoutWidget8);
        label_3->setObjectName("label_3");
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"}"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        comboBox = new QComboBox(layoutWidget8);
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
        label_4 = new QLabel(layoutWidget8);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"font-weight: bold;\n"
"}"));

        horizontalLayout->addWidget(label_4);

        sensorValue = new QLineEdit(layoutWidget8);
        sensorValue->setObjectName("sensorValue");
        sensorValue->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: #FFB6C1;\n"
"color: #472F5B;\n"
"}"));

        horizontalLayout->addWidget(sensorValue);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        pushButton = new QPushButton(layoutWidget8);
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

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(20, 320, 461, 161));
        groupBox_4->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: #FFB6C1;\n"
" border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 20px;\n"
"   border-color: #800080;\n"
"}"));
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(20, 20, 224, 31));
        QFont font6;
        font6.setPointSize(14);
        font6.setBold(true);
        label_16->setFont(font6);
        label_16->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #472F5B;\n"
"}"));
        editSensorValue = new QLineEdit(groupBox_4);
        editSensorValue->setObjectName("editSensorValue");
        editSensorValue->setGeometry(QRect(20, 60, 421, 28));
        updateButton = new QPushButton(groupBox_4);
        updateButton->setObjectName("updateButton");
        updateButton->setGeometry(QRect(120, 100, 101, 21));
        updateButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #FFB6C1;\n"
"background-color: #472F5B;\n"
"font-weight: bold;\n"
" border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 10px;\n"
"   border-color: #800080;\n"
"}"));
        deleteEntry = new QPushButton(groupBox_4);
        deleteEntry->setObjectName("deleteEntry");
        deleteEntry->setGeometry(QRect(230, 100, 101, 21));
        deleteEntry->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #FFB6C1;\n"
"background-color: #472F5B;\n"
"font-weight: bold;\n"
" border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 10px;\n"
"   border-color: #800080;\n"
"}"));
        logoutButton = new QPushButton(centralwidget);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(1070, 60, 101, 31));
        logoutButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #FFB6C1;\n"
"background-color: #472F5B;\n"
"font-weight: bold;\n"
" border: 2px solid rgb(37, 39,48);\n"
"   border-radius: 10px;\n"
"   border-color: #800080;\n"
"}"));
        layoutWidget9 = new QWidget(centralwidget);
        layoutWidget9->setObjectName("layoutWidget9");
        layoutWidget9->setGeometry(QRect(950, 50, 105, 46));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget9);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        userButton = new QPushButton(layoutWidget9);
        userButton->setObjectName("userButton");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/accountbut.png"), QSize(), QIcon::Normal, QIcon::Off);
        userButton->setIcon(icon);
        userButton->setIconSize(QSize(35, 35));
        userButton->setFlat(true);

        horizontalLayout_11->addWidget(userButton);

        aboutButton = new QPushButton(layoutWidget9);
        aboutButton->setObjectName("aboutButton");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        aboutButton->setIcon(icon1);
        aboutButton->setIconSize(QSize(35, 35));
        aboutButton->setFlat(true);

        horizontalLayout_11->addWidget(aboutButton);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(560, 0, 91, 91));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/logo.png")));
        label->setScaledContents(true);
        reshData_2 = new QPushButton(centralwidget);
        reshData_2->setObjectName("reshData_2");
        reshData_2->setGeometry(QRect(0, 100, 1201, 16));
        reshData_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"background-color: #472F5B;\n"
"}"));
        MainPage->setCentralWidget(centralwidget);
        reshData_2->raise();
        FIRSTNAME->raise();
        addRess->raise();
        tabWidget->raise();
        reshData->raise();
        groupBox->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        groupBox_4->raise();
        logoutButton->raise();
        layoutWidget3->raise();
        label->raise();
        menubar = new QMenuBar(MainPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1197, 25));
        MainPage->setMenuBar(menubar);

        retranslateUi(MainPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainPage);
    } // setupUi

    void retranslateUi(QMainWindow *MainPage)
    {
        MainPage->setWindowTitle(QCoreApplication::translate("MainPage", "MainWindow", nullptr));
        actionUser_profile->setText(QCoreApplication::translate("MainPage", "User profile", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainPage", "About", nullptr));
        actionExit->setText(QCoreApplication::translate("MainPage", "Exit", nullptr));
        FIRSTNAME->setText(QCoreApplication::translate("MainPage", "UserName's", nullptr));
        addRess->setText(QCoreApplication::translate("MainPage", "Buru-un Iligan City, Lanao del Norte", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(soilMoistureTab), QCoreApplication::translate("MainPage", "Soil Moisture", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(phTab), QCoreApplication::translate("MainPage", "pH", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(temperatureTab), QCoreApplication::translate("MainPage", "Temperature", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(humidityTab), QCoreApplication::translate("MainPage", "Humidity", nullptr));
        reshData->setText(QCoreApplication::translate("MainPage", "Refresh Data", nullptr));
        groupBox->setTitle(QString());
        label_14->setText(QCoreApplication::translate("MainPage", "Lastest Climatic Data", nullptr));
        label_15->setText(QCoreApplication::translate("MainPage", "Soil Moisture:", nullptr));
        soilMoistureLatest->setText(QCoreApplication::translate("MainPage", " <value>", nullptr));
        label_21->setText(QCoreApplication::translate("MainPage", "Humidity:", nullptr));
        humidityLatest->setText(QCoreApplication::translate("MainPage", " <value>", nullptr));
        label_19->setText(QCoreApplication::translate("MainPage", "Temperature:", nullptr));
        temperatureLatest->setText(QCoreApplication::translate("MainPage", "<value>", nullptr));
        label_17->setText(QCoreApplication::translate("MainPage", "pH:", nullptr));
        phLatest->setText(QCoreApplication::translate("MainPage", " <value>", nullptr));
        label_23->setText(QCoreApplication::translate("MainPage", "Updated as of ", nullptr));
        currentTime->setText(QCoreApplication::translate("MainPage", "<value>", nullptr));
        groupBox_2->setTitle(QString());
        reshCounter->setText(QCoreApplication::translate("MainPage", "Refresh Counter", nullptr));
        label_10->setText(QCoreApplication::translate("MainPage", "Temperature:", nullptr));
        temperatureAbnormalCounter->setText(QCoreApplication::translate("MainPage", "<value>", nullptr));
        label_5->setText(QCoreApplication::translate("MainPage", "Abnormal Climatic Parameters", nullptr));
        label_8->setText(QCoreApplication::translate("MainPage", "pH", nullptr));
        pHAbnormalCounter->setText(QCoreApplication::translate("MainPage", "<value>", nullptr));
        label_12->setText(QCoreApplication::translate("MainPage", "Humidity", nullptr));
        humidityAbnormalCounter->setText(QCoreApplication::translate("MainPage", "<value>", nullptr));
        label_6->setText(QCoreApplication::translate("MainPage", "Soil Moisture:", nullptr));
        soilMoistureAbnormalCounter->setText(QCoreApplication::translate("MainPage", "<value>", nullptr));
        groupBox_3->setTitle(QString());
        label_3->setText(QCoreApplication::translate("MainPage", "Input Climatic Data Parameter", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainPage", "Soil Moisture", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainPage", "pH", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainPage", "Temperature", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainPage", "Humidity", nullptr));

        label_4->setText(QCoreApplication::translate("MainPage", "Value:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainPage", "Insert Data", nullptr));
        groupBox_4->setTitle(QString());
        label_16->setText(QCoreApplication::translate("MainPage", "Sensor Value", nullptr));
        updateButton->setText(QCoreApplication::translate("MainPage", "Update", nullptr));
        deleteEntry->setText(QCoreApplication::translate("MainPage", "Delete", nullptr));
        logoutButton->setText(QCoreApplication::translate("MainPage", "Log out", nullptr));
        userButton->setText(QString());
        aboutButton->setText(QString());
        label->setText(QString());
        reshData_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainPage: public Ui_MainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
