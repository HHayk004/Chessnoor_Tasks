#include "buttonwithmyname.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ButtonWithMyName w;
    w.show();
    return a.exec();
}
