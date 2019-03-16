#pragma once
#include "../../lib/libsocks2c.h"
#include <unistd.h>
void test()
{
    LibSocks2c::Config config;
    config.isServer = true;
    config.proxyKey = "12345678";
    config.server_ip = "0.0.0.0";
    config.server_port = 443;
    config.udp2raw = false;
    config.timeout = 0;

    LibSocks2c::StartProxy(config);

    getchar();

}