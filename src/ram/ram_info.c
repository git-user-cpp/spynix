/*
 *   Copyright 2024 Andrew Kushyk
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 */

#include <stdio.h>
#include <sys/sysinfo.h>
#include "ram_info.h" 

void print_ram_info(void)
{
        struct sysinfo sys_info;
        sysinfo(&sys_info);

        printf(" ____________\n\
|\n\
| RAM Info\n\
|____________\n\
|\n");
        printf("| Uptime: %ld Hours\n", sys_info.uptime / 60 / 60);
        printf("| Total RAM: %ld MiB\n",
                sys_info.totalram * sys_info.mem_unit / 1024 / 1024);
        printf("| Free RAM: %ld MiB\n",
                sys_info.freeram * sys_info.mem_unit / 1024 / 1024);
        printf("|____________\n\n");
}
