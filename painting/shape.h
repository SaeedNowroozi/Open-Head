#ifndef SHAPE_H
#define SHAPE_H

#include <QObject>
#include "factoryshape.h"

class Shape : public QObject
{
    Q_OBJECT
public:
    explicit Shape(QObject *parent = nullptr);

signals:

};

class Triangle : public Shape, public FactoryShape
{
    Q_OBJECT
public:
     Triangle(QObject *parent = nullptr);

signals:


     // FactoryShape interface
protected:
     void addElement() override;
};
class Circle : public Shape, public FactoryShape
{
    Q_OBJECT
public:
     Circle(QObject *parent = nullptr);

signals:


     // FactoryShape interface
protected:
     void addElement() override;
};
class Rectangle : public Shape, public FactoryShape
{
    Q_OBJECT
public:
     Rectangle(Shape *parent = nullptr);

signals:


     // FactoryShape interface
protected:
     void addElement() override;
};
#endif // SHAPE_H
