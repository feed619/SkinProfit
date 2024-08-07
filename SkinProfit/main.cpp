#include "skinprofit.h"

#include <QApplication>
#include <QIcon>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SkinProfit w;
    QString dirParh = QDir::currentPath();
    QString path = dirParh+"/../SkinProfit/image/logo.ico";

    QIcon appIcon(path);

    w.setWindowIcon(appIcon);

    w.setFixedSize(512,72);
    w.show();
    return a.exec();
}
