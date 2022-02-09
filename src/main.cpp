#include "QProcessInfoDialog.h"
#include <QApplication>

int main(int argc, char* argv[]) {

    QApplication a(argc, argv);

    QProcessInfoDialog w;
    w.exec();

    return a.exec();
}

