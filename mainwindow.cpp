#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "widget/aboutdialog.h"
#include "widget/ribbonform.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
  //  RibbonForm *bbb = new  RibbonForm(this);

    ui->setupUi(this);
    //ui->gridLayout->addWidget(bbb,0,1);

    ui->widget_2->setStyleSheet("background-color: rgb(109, 241, 201)");

    m_helpMenu = menuBar()->addMenu(tr("&Help"));

    m_aboutAction = new QAction(tr("&About"), this);
    connect(m_aboutAction, &QAction::triggered, this, &MainWindow::onAboutActionTriggered);

    m_helpMenu->addAction(m_aboutAction);

  //  ui->ribbonwidget->
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
