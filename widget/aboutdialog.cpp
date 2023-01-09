#include "aboutdialog.h"
#include "ui_aboutdialog.h"

AboutDialog::AboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDialog)
{
    ui->setupUi(this);
    connect(ui->close_btn,&QPushButton::clicked,this,
           &AboutDialog::on_close_btn_clicked);
    setWindowOpacity(1);
    setWindowTitle("About");
}

AboutDialog::~AboutDialog()
{
    delete ui;
}

void AboutDialog::on_close_btn_clicked()
{
    close();
    deleteLater();
}

