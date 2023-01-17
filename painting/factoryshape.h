#ifndef FACTORYSHAPE_H
#define FACTORYSHAPE_H

#include <QObject>
//Factory Pateern
class FactoryShape
{

public:
    explicit FactoryShape();
protected:
    virtual void addElement()=0;
signals:

};

#endif // FACTORYSHAPE_H
