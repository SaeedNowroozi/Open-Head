#ifndef SUBSYSTEMMOTORS_H
#define SUBSYSTEMMOTORS_H

#include <QObject>

class SubsystemMotors : public QObject
{
    Q_OBJECT
public:
    explicit SubsystemMotors(QObject *parent = nullptr);
protected:
    int Speed(int s)const;
    int SpeedUp(int s)const;
    int SpeedDown(int s)const;

signals:

};

#endif // SUBSYSTEMMOTORS_H
