#include "mainpage.h"
#include "ui_mainpage.h"
#include <QDoubleValidator>
#include <QDateTime>
#include <QTableView>


MainPage::MainPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainPage)
{
    ui->setupUi(this);
    //add ComboBox Sensor



    // Initialize models for each table
    model = new QStandardItemModel();
    ui->soilMoistureTable->setModel(model);
    ui->soilMoistureTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Date and Time")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("Sensor Value")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Status")));
    ui->soilMoistureTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    model = new QStandardItemModel();
    ui->phTable->setModel(model);
    ui->phTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Date and Time")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("Sensor Value")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Status")));
    ui->phTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    model = new QStandardItemModel();
    ui->humidityTable->setModel(model);
    ui->humidityTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Date and Time")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("Sensor Value")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Status")));
    ui->humidityTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    model = new QStandardItemModel();
    ui->temperatureTable->setModel(model);
    ui->temperatureTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Date and Time")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("Sensor Value")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Status")));
    ui->temperatureTable->setEditTriggers(QAbstractItemView::NoEditTriggers);


}



void MainPage::on_pushButton_clicked()
{
    QString userInput = ui->sensorValue->displayText();

    // Create a QDoubleValidator to Sensor Value Input
    QDoubleValidator validator;
    int pos = 0;
    QValidator::State state = validator.validate(userInput, pos);

    if (state != QValidator::Acceptable) {
        QMessageBox::critical(this, "Validation Error", "Input must be a valid double.");
    } else {
        // Input is a valid double
        QString dateTime = QDateTime::currentDateTime().toString("MMM d, yyyy h:mmAP"); // Get current date and time
        QString sensorValue = userInput;
        QString status = "NORMAL";

        // Check the selected item in the combo box
        QString selectedSensor = ui->comboBox->currentText();

        // Access the correct tab widget based on the selected sensor
        QWidget *currentTabWidget = nullptr;
        if (selectedSensor == "pH") {
            currentTabWidget = ui->phTab;
        } else if (selectedSensor == "Soil Moisture") {
            currentTabWidget = ui->soilMoistureTab;
        } else if (selectedSensor == "Humidity") {
            currentTabWidget = ui->humidityTab;
        } else if (selectedSensor == "Temperature") {
            currentTabWidget = ui->temperatureTab;
        } else {
            // Handle other combo box selections here
            QMessageBox::warning(this, "Not Handled", "Selected combo box item is not handled.");
            return;
        }

        // Access the table widget within the current tab widget
        QTableView *currentTableView = currentTabWidget->findChild<QTableView *>();

        if (currentTableView) {
            // Add new row to the table
            QStandardItemModel *currentModel = dynamic_cast<QStandardItemModel *>(currentTableView->model());
            if (currentModel) {
                QList<QStandardItem *> newRowItems;
                newRowItems << new QStandardItem(dateTime) << new QStandardItem(sensorValue) << new QStandardItem(status);
                currentModel->appendRow(newRowItems);
                currentTableView->viewport()->update();
            }
        } else {
            QMessageBox::warning(this, "Table Not Found", "Table widget not found in the selected tab.");
        }

        QMessageBox::information(this, "Success", selectedSensor + " with a value of " + userInput + " has been saved.");
    }
}

MainPage::~MainPage()
{
    delete ui;
}


