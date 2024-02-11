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
#include <stdint.h>
#include <stdlib.h>
#include "cpu_info.h" 

void print_cpu_info(void)
{
        printf("\033[036m ____________\n\
|\n\
| CPU Info:\n\
|____________\n\
|\033[0m\n");

        system("lscpu");
        printf("\033[036m|____________\033[0m\n\n");
}

void print_full_cpu_info(void)
{
        FILE *cpu_file;

        printf("\033[036m ____________\n\
|\n\
| Full CPU Info:\n\
|____________\n\
|\033[0m\n");

        cpu_file = fopen("/proc/cpuinfo", "r");
        if (cpu_file) {
                char line[128];

                while (fgets(line, sizeof(line), cpu_file)) {
                        printf("\033[036m|\033[0m %s", line);
                }

                fclose(cpu_file);

                printf("\033[036m|____________\033[0m\n\n");
        } else {
                printf("\033[031mError opening /proc/cpuinfo\033[0m\n");
        }
}

