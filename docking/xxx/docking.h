#ifndef DOCKING_H
#define DOCKING_H

#include <QObject>

class docking : public QObject
{
    Q_OBJECT
public:
    explicit docking(QObject *parent = nullptr);

signals:

};

#endif // DOCKING_H
