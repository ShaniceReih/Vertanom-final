#include "sensorcondition.h"
#include "ui_sensorcondition.h"

sensorCondition::sensorCondition(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::sensorCondition)
{
    ui->setupUi(this);
}

sensorCondition::~sensorCondition()
{
    delete ui;
}
