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
#include <sys/utsname.h>
#include "sys_info.h"

void print_sys_info(void)
{
        struct utsname sys_info;
        uname(&sys_info);

        printf("\033[036m ____________\n\
|\n\
| System Info\n\
|____________\n\
|\033[0m\n");
        printf("\033[036m|\033[0m System Name: %s\n", sys_info.sysname);
        printf("\033[036m|\033[0m Host Name: %s\n", sys_info.nodename);
        printf("\033[036m|\033[0m Kernel Release: %s\n", sys_info.release);
        printf("\033[036m|\033[0m System Version: %s\n", sys_info.version);
        printf("\033[036m|\033[0m Machine Type: %s\n", sys_info.machine);
        printf("\033[036m|____________\033[0m\n\n");
}
