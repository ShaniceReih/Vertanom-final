#ifndef SENSORCONDITION_H
#define SENSORCONDITION_H

#include <QDialog>

namespace Ui {
class sensorCondition;
}

class sensorCondition : public QDialog
{
    Q_OBJECT

public:
    explicit sensorCondition(QWidget *parent = nullptr);
    ~sensorCondition();

private:
    Ui::sensorCondition *ui;
};

#endif // SENSORCONDITION_H
