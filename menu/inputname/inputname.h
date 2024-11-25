#ifndef INPUTNAME_H
#define INPUTNAME_H

#include <QWidget>
#include <QDebug>
#include "view.h"
#include "item.h"
#include "elixir.h"
#include "gamecontroller.h"
#include "view.h"

namespace Ui {
class InputName;
}

class InputName : public QWidget
{
    Q_OBJECT

public:
    explicit InputName(QWidget *parent = nullptr);
    QString getName();
    ~InputName();

public slots:
    //void exitFromWindow();

signals:
    void closeWindow(QString str);

private slots:
    void on_ok_but_clicked();

private:

    Ui::InputName *ui;
};

#endif // INPUTNAME_H
