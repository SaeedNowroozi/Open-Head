#ifndef SUBSYSTEMAIRPRESSURE_H
#define SUBSYSTEMAIRPRESSURE_H

#include <QObject>

class SubsystemAirPressure : public QObject
{
    Q_OBJECT
public:
    explicit SubsystemAirPressure(QObject *parent = nullptr);

signals:

};

#endif // SUBSYSTEMAIRPRESSURE_H
