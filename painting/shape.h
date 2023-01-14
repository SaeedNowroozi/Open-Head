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

class Triangle : public Shape
{
    Q_OBJECT
public:
     Triangle(QObject *parent = nullptr);

signals:

};
class Circle : public Shape
{
    Q_OBJECT
public:
     Circle(QObject *parent = nullptr);

signals:

};
class Rectangle : public Shape
{
    Q_OBJECT
public:
     Rectangle(Shape *parent = nullptr);

signals:

};
#endif // SHAPE_H
