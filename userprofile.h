#ifndef USERPROFILE_H
#define USERPROFILE_H

#include <QDialog>
#include <QSqlDatabase>

QT_BEGIN_NAMESPACE
namespace Ui { class UserProfile; }
QT_END_NAMESPACE

class UserProfile : public QDialog
{
    Q_OBJECT

public:
    UserProfile(QWidget *parent = nullptr);
    ~UserProfile();

private:
    Ui::UserProfile *ui;
    QSqlDatabase sqlitedb; // Declare db as a member variable
    void fetchUserInfo(); // Declare fetchUserInfo with QSqlDatabase parameter

};
extern QString currentUserUsername;
#endif // USERPROFILE_H
