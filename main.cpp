#include "mainwindow.h"

#include <QApplication>
#include <QtWebEngine>
#include <QtWebEngineWidgets>
#include <QWebEngineView>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
