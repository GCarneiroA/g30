#include "server.h"

Server::Server(QObject *parent)
    : QTcpServer(parent)
{
}

void Server::startServer()
{
    qDebug() << "Starting server...";
}
