#include "ribbonform.h"
#include "ui_ribbonform.h"

RibbonForm::RibbonForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RibbonForm)
{
    ui->setupUi(this);
}

RibbonForm::~RibbonForm()
{
    delete ui;
}
