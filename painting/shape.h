#ifndef SHAPE_H
#define SHAPE_H

#include <QObject>

class Shape : public QObject
{
    Q_OBJECT
public:
    explicit Shape(QObject *parent = nullptr);

signals:

};

#endif // SHAPE_H
