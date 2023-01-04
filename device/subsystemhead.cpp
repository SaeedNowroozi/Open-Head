#include "subsystemhead.h"

SubsystemHead::SubsystemHead(QObject *parent)
    : QObject{parent}
{

}

QVector<int> SubsystemHead::select_Nuzzle(int Nuzzle) const
{

}

void SubsystemHead::FireHead() const
{

}

void SubsystemHead::StopHead() const
{

}

bool SubsystemHead::MgnHead(QList<QSharedPointer<Model_Data *> > mod)
{
    return false;
}
