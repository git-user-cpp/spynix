/*
 * Copyright 2024 Andrew Kushyk
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 */

#include <string.h>
#include "sys/sys_info.h"
#include "ram/ram_info.h"
#include "cpu/cpu_info.h"
#include "rom/rom_info.h"
#include "hlp/hlp_info.h"
#include "net/net_info.h"

int main(int argc, char **argv)
{
        if (argc == 1) {
                print_sys_info();
                print_cpu_info();
                print_ram_info();
                print_rom_info();
        } else if (argc == 2) {
                if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0) {
                        print_hlp_info();
                } else if (strcmp(argv[1], "-a") == 0 || strcmp(argv[1], "--all") == 0) {
                        print_sys_info();
                        print_cpu_info();
                        print_ram_info();
                        print_rom_info();
                } else if (strcmp(argv[1], "-sys") == 0) {
                        print_sys_info();
                } else if (strcmp(argv[1], "-cpu") == 0) {
                        print_cpu_info();
                } else if (strcmp(argv[1], "-ram") == 0) {
                        print_ram_info();
                } else if (strcmp(argv[1], "-rom") == 0) {
                        print_rom_info();
                } else if (strcmp(argv[1], "-net") == 0) {
                        char host_name[30];

                        printf("Enter a hostname or IP address: ");
                        fgets(host_name, sizeof(host_name), stdin);
                        host_name[strcspn(host_name, "\n")] = '\0';

                        print_net_info(host_name); 
                } else if (strcmp(argv[1], "-v") == 0 || strcmp(argv[1], "--version") == 0) {
                        print_ver_info();
                } else if (strcmp(argv[1], "-b") == 0 || strcmp(argv[1], "--banner") == 0) {
                        print_banner();
                } else if (strcmp(argv[1], "-l") == 0 || strcmp(argv[1], "--logo") == 0) {
                        print_logo();
                } else {
                        print_err_info();
                }
        } else if (argc == 3) {
                if ((strcmp(argv[1], "-cpu") == 0) && ((strcmp(argv[2], "-f") == 0) || 
                    (strcmp(argv[2], "--full") == 0))) {
                        print_full_cpu_info();
                } else {
                        print_err_info();
                }
        } else {
                print_err_info();
        }

        return 0;
}

