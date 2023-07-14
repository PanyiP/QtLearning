#pragma once

#include <QObject>
#include <QDebug>
#include <QFile>
#include <QDateTime>
#include <QDir>
#include <iostream>
#include <QTextStream>

class Logger  : public QObject
{
    Q_OBJECT

public:
    Logger(QObject *parent = nullptr);
    ~Logger();

    static bool logging;
    static QString filename;

    static void Attach();
    static void handler(QtMsgType type, const QMessageLogContext& context, const QString& msg);
};
