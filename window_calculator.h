#ifndef WINDOW_CALCULATOR_H
#define WINDOW_CALCULATOR_H

#include <QApplication>
#include <QWidget>
#include "window_main.h"


class Window_calculator : public QWidget
{
    Q_OBJECT
public:
    explicit Window_calculator(QWidget *parent = nullptr);
    Window_main *window_main;
protected:
    void closeEvent(QCloseEvent *event) override {
        window_main -> window_calculator_is_on = false;
    }
signals:
private slots:
};

#endif // WINDOW_CALCULATOR_H
