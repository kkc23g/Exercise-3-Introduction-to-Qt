#include "window_main.h"
#include "window_calculator.h"
#include <QApplication>
#include <QPushButton>
#include <QSlider>

Window_main::Window_main(QWidget *parent)
    : QWidget{parent}
{
    // Set size of the window
    setFixedSize(900, 100);
    window_calculator_is_on = false;
    setWindowTitle("Menu");
    setStyleSheet("background-color: rgb(149, 178, 245)");

    // Set counter
    QFont font("Courier New");
    font.setBold(true);
    font.setPixelSize(30);

    // Create and position the button
    button_calculator = new QPushButton("Calculator", this);
    button_calculator -> setGeometry(50, 20, 400, 60);
    button_calculator -> setToolTip("Open calculator: ");
    button_calculator -> setFont(font);
    button_calculator -> setStyleSheet("background-color: rgb(69, 181, 155)");

    // Icon
    QIcon icon_calculator ("/Users/kkc23/OneDrive/Documents/Qt/Tutorial/Calculator_icon.png");
    button_calculator -> setIcon(icon_calculator);
    button_calculator -> setIconSize(QSize(50, 50));

    // Create and position the button
    button_calendar = new QPushButton("Calendar", this);
    button_calendar -> setGeometry(460, 20, 400, 60);
    button_calendar -> setToolTip("Open Calendar: ");
    button_calendar -> setFont(font);
    button_calendar -> setStyleSheet("background-color: rgb(69, 181, 155)");

    // Icon
    QIcon icon_calendar ("/Users/kkc23/OneDrive/Documents/Qt/Tutorial/Calendar.png");
    button_calendar -> setIcon(icon_calendar);
    button_calendar -> setIconSize(QSize(50, 50));

    // Connect
    button_calculator -> setCheckable(true);
    connect(button_calculator, SIGNAL (clicked(bool)), this, SLOT (buttonCalculatorClicked(bool)));

    // Connect
    connect(this, SIGNAL (counterReached()), QApplication::instance(), SLOT (quit()));
    connect(button_calculator, SIGNAL (clicked(bool)), this, SLOT (buttonCalculatorOnClick()));
}

void Window_main::buttonCalculatorOnClick()
{
    button_calculator -> setChecked(false);
    if (!window_calculator_is_on) {
        // QTextStream(stdout) << "Something << Qt::endl;
        Window_calculator *window_calculator = new Window_calculator();
        window_calculator -> show();
        window_calculator -> window_main = this;
        window_calculator_is_on = true;
    }
}
