#ifndef GROUND_H
#define GROUND_H

#include <QGraphicsItem>
#include "shape.h"
#include<vector>
#include<memory>

class Ground : public QGraphicsItem
{

public:
    Ground();
private:
    std::vector<std::unique_ptr<Shape>> shapes;
    //



    // QGraphicsItem interface
public:
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
};


#endif // GROUND_H
