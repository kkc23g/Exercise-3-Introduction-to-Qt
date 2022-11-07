#ifndef WINDOW_MAIN_H
#define WINDOW_MAIN_H

#include <QWidget>
#include <QPushButton>

class Window_main : public QWidget
{
    Q_OBJECT
public:
    explicit Window_main(QWidget *parent = nullptr);
    bool window_calculator_is_on;
private:
    QPushButton *button_calculator;
    QPushButton *button_calendar;
signals:
    void counterReached();
private slots:
    void buttonCalculatorOnClick();
};

#endif // WINDOW_MAIN_H
