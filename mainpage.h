#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QMessageBox>
#include <QInputDialog>
namespace Ui {
class MainPage;
}

class MainPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainPage(QWidget *parent = nullptr);
    ~MainPage();

private:
    Ui::MainPage *ui;
    QStandardItemModel *model;
    QMessageBox *msg;
};

#endif // MAINPAGE_H
