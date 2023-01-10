#include "painting_ground.h"

#include <QtWidgets/QGraphicsScene>

Painting_Ground::Painting_Ground(QWidget *parent)
    : QGraphicsView(new QGraphicsScene, parent)
{

}
