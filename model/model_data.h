#ifndef MODEL_DATA_H
#define MODEL_DATA_H

#include <QAbstractListModel>
#include <QObject>

class Model_Data : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit Model_Data(QObject *parent = nullptr);
    enum DataRoles {
            Colored ,
            Uncolored ,
            PosX ,
            PosY,
    };

    // QAbstractItemModel interface
public:
    int rowCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role) const override;
    bool setData(const QModelIndex &index, const QVariant &value, int role) override;
    QHash<int, QByteArray> roleNames() const override;
};

#endif // MODEL_DATA_H
