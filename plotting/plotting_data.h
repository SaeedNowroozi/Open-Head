#ifndef PLOTTING_DATA_H
#define PLOTTING_DATA_H

#include <QObject>

class Plotting_Data : public QObject
{
    Q_OBJECT
public:
    explicit Plotting_Data(QObject *parent = nullptr);

signals:

};

#endif // PLOTTING_DATA_H
