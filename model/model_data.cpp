#include "model_data.h"

Model_Data::Model_Data(QObject *parent)
    : QAbstractListModel{parent}
{

}


int Model_Data::rowCount(const QModelIndex &parent) const
{
}

QVariant Model_Data::data(const QModelIndex &index, int role) const
{
}

bool Model_Data::setData(const QModelIndex &index, const QVariant &value, int role)
{
}

QHash<int, QByteArray> Model_Data::roleNames() const
{
}
