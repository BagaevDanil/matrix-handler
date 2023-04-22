#ifndef APPLICATION_H
#define APPLICATION_H

#include <QObject>
#include <QCoreApplication>
#include "squarematrix.h"
#include "communicator.h"

class TApplication : public QCoreApplication
{
    Q_OBJECT

    TCommunicator *comm;

public:
    TApplication(int, char**);

public slots:
    void HandleRequest(QByteArray);

};

#endif // APPLICATION_H
