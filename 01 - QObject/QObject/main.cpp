#include <QCoreApplication>
#include "test.h"

void Notifications()
{
    Test mom;
    Test child;

    mom.setObjectName("Mom");
    child.setObjectName("Child");

    QObject::connect(&mom, &Test::Alarm, &child, &Test::Wake, Qt::ConnectionType::AutoConnection);

    qDebug() << &mom;
    qDebug() << &child;

    mom.Testing();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Notifications();

    return a.exec();
}
