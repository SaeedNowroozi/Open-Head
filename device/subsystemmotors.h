#ifndef SUBSYSTEMMOTORS_H
#define SUBSYSTEMMOTORS_H

#include <QObject>
#include "control_motor.h"
#include <memory>
class SubsystemMotors : public QObject
{
    Q_OBJECT
public:
    explicit SubsystemMotors(QObject *parent = nullptr);
protected:
    int Speed(int s)const;
    int SpeedUp(int s)const;
    int SpeedDown(int s)const;
private:
std::unique_ptr<Control_Motor> motor_Head;
std::unique_ptr<Control_Motor> motor_X;
std::unique_ptr<Control_Motor> motor_Y;

signals:

};

#endif // SUBSYSTEMMOTORS_H
