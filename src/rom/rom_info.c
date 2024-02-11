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
#include <sys/statvfs.h>
#include "rom_info.h" 

void print_rom_info(void)
{
        struct statvfs fs_info;

        printf("\033[036m ____________\n\
|\n\
| ROM Info:\n\
|____________\n\
|\033[0m\n");

        if (statvfs("/", &fs_info) == 0) {
                printf("\033[036m|\033[0m Total Disk Space: %ld MiB\n",
                       fs_info.f_blocks * fs_info.f_bsize / 1024 / 1024);
                printf("\033[036m|\033[0m Free Disk Space: %ld MiB\n",
                        fs_info.f_bfree * fs_info.f_bsize / 1024 / 1024);
                printf("\033[036m|\033[0m Used Disk Space: %ld MiB\n",
                        (fs_info.f_blocks - fs_info.f_bfree) *
                        fs_info.f_bsize / 1024 / 1024);
                printf("\033[036m|____________\033[0m\n\n");
        }
}
