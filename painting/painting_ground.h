#ifndef PAINTING_GROUND_H
#define PAINTING_GROUND_H

#include <QObject>

#include <sepol/sepol.h>


class Painting_Ground : public QObject
{
    Q_OBJECT
public:
    explicit Painting_Ground(QObject *parent = nullptr);


};

#endif // PAINTING_GROUND_H
