#include "daemon.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    Server mServer;
    mServer.startServer();

    return app.exec();
}
