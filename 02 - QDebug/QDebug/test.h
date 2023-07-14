#pragma once

#include <QObject>
#include <QDebug>

class Test  : public QObject
{
    Q_OBJECT

public:
    Test(QObject *parent = nullptr);
    ~Test();

    void Testing();
};
