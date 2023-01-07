#ifndef SHAPE_H
#define SHAPE_H

#include <QObject>
#include <spdlog/spdlog.h>

class Shape : public QObject
{
    Q_OBJECT
public:
    explicit Shape(QObject *parent = nullptr);
    void ss(){ spdlog::info("Welcome to spdlog!");}
signals:

};

#endif // SHAPE_H
