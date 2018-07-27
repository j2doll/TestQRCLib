#include "qrclib.h"


QRCLib::QRCLib()
{
    Q_INIT_RESOURCE(qrc);
}

int QRCLib::helloWorld(int world)
{
    int ret = world + 1;
    return ret;
}
