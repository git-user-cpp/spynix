/*
 * Copyright 2024 Andrew Kushyk
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 */

#ifndef NET_INFO_H_SENTRY
#define NET_INFO_H_SENTRY
    #include <ifaddrs.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <sys/socket.h>
    #include <netdb.h>
    #include <arpa/inet.h>
    #include <stdint.h>

    void print_net_info(char *hostname);
#endif
