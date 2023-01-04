#ifndef PNG_MANAGER_H
#define PNG_MANAGER_H

#include <QObject>

class PNG_Manager : public QObject
{
    Q_OBJECT
public:
    explicit PNG_Manager(QObject *parent = nullptr);

signals:

};

#endif // PNG_MANAGER_H
