#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QMessageBox>
#include <QInputDialog>
#include <QtSql/QtSql>
#include <QSqlDatabase>
#include <QTableView>
namespace Ui {
class MainPage;
}

class MainPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainPage(QWidget *parent = nullptr);
    ~MainPage();
    void clearAllTables();
    void clearTable(QTableView *tableView);
    void fetchUserFirstName();

    void setGreetingLabelText(const QString& firstName);
    void createAbnormalCountsTable();
    void fetchLatestSensorValues(QSqlDatabase &db);
    void updateAbnormalCount(const QString &sensorType, int abnormalCount);


private slots:

    void on_pushButton_clicked();
    //void on_refreshData_clicked();
    void on_reshData_clicked();
    void on_reshCounter_clicked();
        void fetchLatestSensorValues();

private:
    Ui::MainPage *ui;
    QStandardItemModel *model;
    QMessageBox *msg;
    QSqlDatabase sqlitedb;

};

#endif // MAINPAGE_H
