#include <QtCore/QCoreApplication>
#include <QDebug>
#include "logger.h"
#include "test.h"
#include <QLoggingCategory>

// Declare custom logging category
Q_DECLARE_LOGGING_CATEGORY(network)
// Define custom logging category
Q_LOGGING_CATEGORY(network, "network")

int main(int argc, char *argv[])
{
   QCoreApplication a(argc, argv);

   qInfo() << "File:" << Logger::filename;
   Logger::Attach();

   qInfo() << "test";

   Logger::logging = false;
   qInfo() << "This will not get logged";
   Logger::logging = true;

   Test t;
   t.Testing();

   qInfo() << "Finished";

   qInfo(network) << "Custom logging category!: " << network().categoryName();

   // Turn off category logging
   QLoggingCategory::setFilterRules("network.Debug=false");
   qDebug(network) << "This should not be logged";

   return a.exec();
}
