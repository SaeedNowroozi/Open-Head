#include "mainwindow.h"

#include <QApplication>

#include <spdlog/spdlog.h>
#include <fmt/format.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
     spdlog::info("Welcome to spdlog!");
    MainWindow w;
    w.show();
    return a.exec();
}
