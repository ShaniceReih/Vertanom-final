#ifndef DETABASE_H
#define DETABASE_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class detabase;
}

class detabase : public QWidget
{
    Q_OBJECT

signals:
    void signUpSuccess();

public:
    explicit detabase(QWidget *parent = nullptr);
    ~detabase();

private slots:
    void on_pushButton_clicked();

private:
    Ui::detabase *ui;
    void createTable();
};

#endif // DETABASE_H
