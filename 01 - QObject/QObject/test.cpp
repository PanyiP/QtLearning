#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "Constructed";
}

Test::~Test()
{
    qInfo() << this << "Deconstructed";
}

void Test::Testing()
{
    QString noise = "WAKE UP!!!";
    emit Alarm(noise);//Raise "event" signal
}

void Test::Wake(QString noise)
{
    qInfo() << this << " received from" << sender() << noise;
}
