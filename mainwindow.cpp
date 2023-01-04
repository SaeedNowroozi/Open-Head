#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "device/devices_manager.h"
#include<docking/docking.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Devices_Manager mm(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

