#ifndef MODEL_DATA_H
#define MODEL_DATA_H

#include <QObject>

class Model_Data : public QObject
{
    Q_OBJECT
public:
    explicit Model_Data(QObject *parent = nullptr);
};

#endif // MODEL_DATA_H
