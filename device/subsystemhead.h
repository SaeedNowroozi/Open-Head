#ifndef SUBSYSTEMHEAD_H
#define SUBSYSTEMHEAD_H

#include <QObject>
#include "model/model_data.h"
#include <memory>

class SubsystemHead : public QObject
{
    Q_OBJECT
public:
    explicit SubsystemHead(QObject *parent = nullptr);
    QVector<int> select_Nuzzle(int Nuzzle)const;
    void FireHead()const;
    void StopHead()const;
    bool MgnHead(QList<QSharedPointer<Model_Data *>>mod);


signals:


};

#endif // SUBSYSTEMHEAD_H
