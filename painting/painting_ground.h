#ifndef PAINTING_GROUND_H
#define PAINTING_GROUND_H

#include <QObject>

#include <QtWidgets/QGraphicsView>



class Painting_Ground : public QGraphicsView
{
    Q_OBJECT
public:
    explicit Painting_Ground(QWidget *parent = nullptr);


};

#endif // PAINTING_GROUND_H
