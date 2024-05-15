#include "aboutpage.h"
#include "ui_aboutpage.h"

AboutPage::AboutPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AboutPage)
{
    ui->setupUi(this);
}

AboutPage::~AboutPage()
{
    delete ui;
}
