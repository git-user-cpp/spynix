/*
 * Copyright 2024 Andrew Kushyk
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 */

#include "sys_info.h"

void print_sys_info(void) {
    struct utsname sys_info;
    uname(&sys_info);
    printf(" ____________\n");
    printf("|\n");
    printf("| System Info\n");
    printf("|____________\n");
    printf("|\n");
    printf("| System Name: %s\n", sys_info.sysname);
    printf("| Host Name: %s\n", sys_info.nodename);
    printf("| Kernel Release: %s\n", sys_info.release);
    printf("| System Version: %s\n", sys_info.version);
    printf("| Machine Type: %s\n", sys_info.machine);
    printf("|____________\n\n");
}
