#ifndef PAINTING_GROUND_H
#define PAINTING_GROUND_H

#include <QObject>

#include <QtWidgets/QGraphicsItem>
#include <QtWidgets/QGraphicsView>



class Painting_Ground : public QGraphicsItem
{
    Q_OBJECT
public:
    explicit Painting_Ground(QGraphicsItem *parent = nullptr);


};

#endif // PAINTING_GROUND_H
