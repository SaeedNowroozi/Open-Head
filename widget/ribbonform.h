#ifndef RIBBONFORM_H
#define RIBBONFORM_H

#include <QWidget>

namespace Ui {
class RibbonForm;
}

class RibbonForm : public QWidget
{
    Q_OBJECT

public:
    explicit RibbonForm(QWidget *parent = nullptr);
    ~RibbonForm();

private:
    Ui::RibbonForm *ui;
};

#endif // RIBBONFORM_H
