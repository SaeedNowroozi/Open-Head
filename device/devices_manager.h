#ifndef DEVICES_MANAGER_H
#define DEVICES_MANAGER_H

#include <QObject>
#include "subsystemhead.h"
#include "subsystemairpressure.h"
#include "subsystemmotors.h"

class Devices_Manager : public QObject
{
    Q_OBJECT
public:
    explicit Devices_Manager(QObject *parent = nullptr);
    ~Devices_Manager();
    Devices_Manager(
            SubsystemHead *subhead = nullptr,
            SubsystemMotors *submotor = nullptr,
            SubsystemAirPressure *subair = nullptr);
protected:
    SubsystemAirPressure *subair;
    SubsystemHead *subhead;
    SubsystemMotors *submotor;

signals:

};

#endif // DEVICES_MANAGER_H
