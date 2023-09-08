#ifndef SUBSYSTEMAIRPRESSURE_H
#define SUBSYSTEMAIRPRESSURE_H

#include <QObject>

class SubsystemAirPressure : public QObject
{
    Q_OBJECT
public:
    explicit SubsystemAirPressure(QObject *parent = nullptr);
      /*  خواندن مقدار فشار */
    double _presure_value();
  /*  خواندن واحد انالوگ به دیجیتال */
    uint16_t readADC(uint8_t channel);
signals:

};

#endif // SUBSYSTEMAIRPRESSURE_H
