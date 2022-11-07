#include <QApplication>
#include "window_main.h"

int main(int argc, char **argv) {
    QApplication app (argc, argv);
    /*
    // button.setIcon(QIcon::fromTheme("face-smile"));
    // button.setIconSize(QSize(65, 65));
    */

    Window_main window_main;
    window_main.show();

    return app.exec();
}
