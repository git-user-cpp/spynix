/*
 * Copyright 2024 Andrew Kushyk
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 */

#include <stdio.h>
#include <sys/statvfs.h>
#include "rom_info.h" 

void print_rom_info(void)
{
        struct statvfs fs_info;

        printf(" ____________\n");
        printf("|\n");
        printf("| ROM Info:\n");
        printf("|____________\n");
        printf("|\n");

        if (statvfs("/", &fs_info) == 0) {
                printf("| Total Disk Space: %ld MiB\n",
                       fs_info.f_blocks * fs_info.f_bsize / 1024 / 1024);
                printf("| Free Disk Space: %ld MiB\n",
                        fs_info.f_bfree * fs_info.f_bsize / 1024 / 1024);
                printf("| Used Disk Space: %ld MiB\n",
                        (fs_info.f_blocks - fs_info.f_bfree) *
                        fs_info.f_bsize / 1024 / 1024);
                printf("|____________\n\n");
        }
}
