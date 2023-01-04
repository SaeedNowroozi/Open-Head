#ifndef PAINTING_GROUND_H
#define PAINTING_GROUND_H

#include <QObject>

class Painting_Ground : public QObject
{
    Q_OBJECT
public:
    explicit Painting_Ground(QObject *parent = nullptr);

signals:

};

#endif // PAINTING_GROUND_H
