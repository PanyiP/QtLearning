#include "test.h"

Test::Test(QObject *parent)
    : QObject(parent)
{
   qDebug() << this << "Constructed";
}

Test::~Test()
{}

void Test::Testing()
{
   qWarning() << "This is a test!!!";
}
