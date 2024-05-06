#include "mainpage.h"
#include "ui_mainpage.h"


MainPage::MainPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainPage)
{
    ui->setupUi(this);

    model = new QStandardItemModel();
    ui->soilMoistureTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    model-> setHorizontalHeaderItem(0,new QStandardItem(QString("Date and Time")));
    model->setHorizontalHeaderItem(1,new QStandardItem(QString("Sensor Value")));
    model->setHorizontalHeaderItem(2,new QStandardItem(QString("Status")));
    ui->soilMoistureTable->setModel(model);

    model = new QStandardItemModel();
    ui->phTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    model-> setHorizontalHeaderItem(0,new QStandardItem(QString("Date and Time")));
    model->setHorizontalHeaderItem(1,new QStandardItem(QString("Sensor Value")));
    model->setHorizontalHeaderItem(2,new QStandardItem(QString("Status")));
    ui->phTable->setModel(model);

    model = new QStandardItemModel();
    ui->humidityTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    model-> setHorizontalHeaderItem(0,new QStandardItem(QString("Date and Time")));
    model->setHorizontalHeaderItem(1,new QStandardItem(QString("Sensor Value")));
    model->setHorizontalHeaderItem(2,new QStandardItem(QString("Status")));
    ui->humidityTable->setModel(model);

    model = new QStandardItemModel();
    ui->temperatureTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    model-> setHorizontalHeaderItem(0,new QStandardItem(QString("Date and Time")));
    model->setHorizontalHeaderItem(1,new QStandardItem(QString("Sensor Value")));
    model->setHorizontalHeaderItem(2,new QStandardItem(QString("Status")));
    ui->temperatureTable->setModel(model);
}

MainPage::~MainPage()
{
    delete ui;
    //aading headers to the tableview

}

