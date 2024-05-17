#ifndef ABOUTPAGE_H
#define ABOUTPAGE_H

#include <QDialog>
#include "aboutpage.h"
#include "ui_aboutpage.h"
#include "aboutus.h"

namespace Ui {
class AboutPage;
}

class AboutPage : public QDialog
{
    Q_OBJECT

public:
    explicit AboutPage(QWidget *parent = nullptr);
    ~AboutPage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AboutPage *ui;
};

#endif // ABOUTPAGE_H
