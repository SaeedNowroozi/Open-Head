#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "widget/aboutdialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_helpMenu = menuBar()->addMenu(tr("&Help"));

    m_aboutAction = new QAction(tr("&About"), this);
    connect(m_aboutAction, &QAction::triggered, this, &MainWindow::onAboutActionTriggered);

    m_helpMenu->addAction(m_aboutAction);

 }

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onAboutActionTriggered()
{
    AboutDialog aboutDialog(this);
    aboutDialog.setFixedSize(aboutDialog.width(), aboutDialog.height());
    aboutDialog.exec();
}
