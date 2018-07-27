// main.cpp

#include <QtGlobal>
#include <QObject>
#include <QDebug>
#include <QFile>
#include <QByteArray>
#include <QVector>
#include <QList>
#include <QCoreApplication>

#include "qrclib.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Q_INIT_RESOURCE(qrc); // init. QRC file 'qrc.qrc'

    QFile file(":/csvjson.json"); // load from QRC
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Failed to load QRC";
        return (-1);
    }
    qDebug() << "Success to load QRC";

    while (!file.atEnd()) {
        QByteArray line = file.readLine();
        qDebug() << line;
    }

    int ret = 0;
    // ret = a.exec();
    return ret;
}
