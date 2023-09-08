#ifndef SUBSYSTEMHEAD_H
#define SUBSYSTEMHEAD_H
#include <stdbool.h>
#include <QObject>
//#include "model/model_data.h"
//#include <memory>

class SubsystemHead : public QObject
{
    Q_OBJECT
public:
    explicit SubsystemHead(QObject *parent = nullptr);
    QVector<int> select_Nuzzle(int Nuzzle)const;
//    bool FireHead()const;
//    void StopHead()const;
//    bool MgnHead(QList<QSharedPointer<Model_Data *>>mod);



    void loadBuffer64(void *val);
    void loadData(int pending);
    void go(int pending);


signals:


};

#endif // SUBSYSTEMHEAD_H
