#include "aboutpage.h"
#include "ui_aboutpage.h"
#include "aboutus.h"
#include "ui_aboutus.h"

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

void AboutPage::on_pushButton_clicked()
{
    aboutUs *dev = new aboutUs();
    dev->show();
}

