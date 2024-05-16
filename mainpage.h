#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QMessageBox>
#include <QInputDialog>
#include <QtSql/QtSql>
#include <QSqlDatabase>
#include <QTableView>
#include <QScrollArea>
#include <QSet> // Include QSet header for maintaining deleted entry IDs
#include <QModelIndex>

#include "userprofile.h"
#include "aboutpage.h"

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

signals:
    void dataUpdated();




private slots:

    void on_pushButton_clicked();
    void on_reshData_clicked();
    void on_reshCounter_clicked();
    void fetchLatestSensorValues();
    void onComboBoxIndexChanged(int index);
    void onTableViewClicked(const QModelIndex &index);
    void on_verticalScrollBar_actionTriggered(int action);
    void on_updateButton_clicked();
    void on_deleteEntry_clicked();
    void on_userButton_clicked();
    void on_aboutButton_clicked();
    void on_logoutButton_clicked();
    void loadDataIntoTables();


private:
    Ui::MainPage *ui;
    QStandardItemModel *model;
    QMessageBox *msg;
    QScrollArea *scrollArea;
    QSqlDatabase sqlitedb;
    QString selectedSensorType;
    QSet<int> deletedEntryIds; // Set to store deleted entry IDs
    void fetchUserName();
    void fetchUserAddress();

};
extern QString currentuserName;
extern QString currentuserAddress;
#endif // MAINPAGE_H
