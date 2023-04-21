#ifndef APPLICATION_H
#define APPLICATION_H

#include <QObject>
#include <QApplication>

#include "interface.h"
#include "communicator.h"

class TApplication : public QApplication
{
    Q_OBJECT

    TCommunicator *comm;
    TInterface    *interface;

public:
    TApplication(int, char**);

public slots:
    void FromCommunicator(QByteArray);
    void ToCommunicator(std::string);

};

#endif // APPLICATION_H
