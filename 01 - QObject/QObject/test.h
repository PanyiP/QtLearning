#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QDebug>

class Test : public QObject
{
    Q_OBJECT

public:
    explicit Test(QObject *parent = nullptr);
    ~Test();

    void Testing();

signals:
    //Always public
    //Always defined
    //Never implemented
    void Alarm(QString noise);

public slots:
    //Can be public, private, protected
    //Always deifned and implemented
    //Should match the signal
    void Wake(QString noise);
};

#endif // TEST_H
