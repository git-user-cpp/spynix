/*
 * Copyright 2024 Andrew Kushyk
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 */

#include "cpu_info.h" 

void print_cpu_info(void)
{
    FILE *cpu_file;

    printf(" ____________\n");
    printf("|\n");
    printf("| CPU Info:\n");
    printf("|____________\n");
    printf("|\n");

    cpu_file = fopen("/proc/cpuinfo", "r");
    if (cpu_file)
    {
        char line[128];
        int lines = 0;
        while (fgets(line, sizeof(line), cpu_file) && lines < 19)
        {
            printf("| %s", line);
            lines++;
        }
        fclose(cpu_file);
        printf("|____________\n\n");
    }
    else
    {
        printf("Error opening /proc/cpuinfo\n");
    }
}

void print_full_cpu_info(void)
{
    FILE *cpu_file;

    printf(" ____________\n");
    printf("|\n");
    printf("| Full CPU Info:\n");
    printf("|____________\n");
    printf("|\n");

    cpu_file = fopen("/proc/cpuinfo", "r");
    if (cpu_file)
    {
        char line[128];
        while (fgets(line, sizeof(line), cpu_file))
        {
            printf("| %s", line);
        }
        fclose(cpu_file);
        printf("|____________\n\n");
    }
    else
    {
        printf("Error opening /proc/cpuinfo\n");
    }
}

