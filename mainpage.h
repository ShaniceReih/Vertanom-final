#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QMessageBox>
#include <QInputDialog>
#include <QtSql/QtSql>
#include <QSqlDatabase>

namespace Ui {
class MainPage;
}

class MainPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainPage(QWidget *parent = nullptr);
    ~MainPage();

private slots:

    void on_pushButton_clicked();




private:
    Ui::MainPage *ui;
    QStandardItemModel *model;
    QMessageBox *msg;
    QSqlDatabase sqlitedb;

};

#endif // MAINPAGE_H
