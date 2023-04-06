#ifndef MODEL_DATA_H
#define MODEL_DATA_H

#include <QAbstractListModel>
#include <QObject>
#include <vector>
#include <tuple>
#include <memory>


class Model_Data : public QAbstractListModel
{
    typedef std::tuple<int, int, bool> cell;
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
    int rowCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role) const override;
    bool setData(const QModelIndex &index, const QVariant &value, int role) override;
    QHash<int, QByteArray> roleNames() const override;
private:
    //ground data to convert to bit
    std::vector<std::vector<cell>> Gro;
};

#endif // MODEL_DATA_H
