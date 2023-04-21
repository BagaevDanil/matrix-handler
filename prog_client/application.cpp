#include "application.h"

TApplication::TApplication(int argc, char *argv[])
            : QApplication(argc,argv)
{
    TCommParams pars = { QHostAddress("127.0.0.1"), 10001,
                         QHostAddress("127.0.0.1"), 10000};
    comm = new TCommunicator(pars, this);

    interface = new TInterface();
    interface->show();

    connect(comm, SIGNAL(recieved(QByteArray)),
            this, SLOT(FromCommunicator(QByteArray)));
    connect(interface, SIGNAL(SendRequest(std::string)),
            this, SLOT(ToCommunicator(std::string)));

}

void TApplication::FromCommunicator(QByteArray msg)
{
    interface->HandleAnswer(QString(msg));
}

void TApplication::ToCommunicator(std::string msg)
{
    QByteArray q;
    qDebug() << QString::fromStdString(msg);
    comm->send(q.append(msg));
}

