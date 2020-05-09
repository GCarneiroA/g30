#ifndef SERVER_H
#define SERVER_H

#include <QTcpServer>
#include <QDebug>

class Server : public QTcpServer
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = nullptr);
    void startServer();
};

#endif      // SERVER_H
