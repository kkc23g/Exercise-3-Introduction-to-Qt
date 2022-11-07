#include <QApplication>
#include <QLabel>
#include "window_calculator.h"

Window_calculator::Window_calculator(QWidget *parent)
    : QWidget{parent}
{
    setWindowTitle("Calculator");

    // I couldn't find how to add background image using script, so I used a button for now

    QPushButton *button = new QPushButton("", this);
    button -> setGeometry(0, 0, 600, 600);

    // Icon
    QIcon icon_calculator ("/Users/kkc23/OneDrive/Documents/Qt/Tutorial/Calculator.png");
    button -> setIcon(icon_calculator);
    button -> setIconSize(QSize(600, 600));
}

