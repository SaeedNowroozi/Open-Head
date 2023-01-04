#include "devices_manager.h"
#include<QDebug>
/**
 * The Facade class provides a simple interface to the complex logic of one or
 * several subsystems. The Facade delegates the client requests to the
 * appropriate objects within the subsystem. The Facade is also responsible for
 * managing their lifecycle. All of this shields the client from the undesired
 * complexity of the subsystem.
 */

Devices_Manager::Devices_Manager(QObject *parent)
    : QObject{parent}
{
qDebug() << "test\n";
}

Devices_Manager::~Devices_Manager()
{
    delete subair;
    delete subhead;
    delete submotor;
}

Devices_Manager::Devices_Manager(SubsystemHead *subhead, SubsystemMotors *submotor, SubsystemAirPressure *subair)
{
    this->subair = subair ?: new SubsystemAirPressure;
    this->subhead = subhead ?: new SubsystemHead;
    this->submotor = submotor ?: new SubsystemMotors;
}
