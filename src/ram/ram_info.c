/*
 * Copyright 2024 Andrew Kushyk
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 */

#include "ram_info.h" 

void print_ram_info(void)
{
        struct sysinfo sys_info;
        sysinfo(&sys_info);

        printf(" ____________\n");
        printf("|\n");
        printf("| RAM Info\n");
        printf("|____________\n");
        printf("|\n");
        printf("| Uptime: %ld Hours\n", sys_info.uptime / 60 / 60);
        printf("| Total RAM: %ld MiB\n",
                sys_info.totalram * sys_info.mem_unit / 1024 / 1024);
        printf("| Free RAM: %ld MiB\n",
                sys_info.freeram * sys_info.mem_unit / 1024 / 1024);
        printf("|____________\n\n");
}
