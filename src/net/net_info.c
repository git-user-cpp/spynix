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
#include <stdlib.h>
#include <stdint.h>
#include <netdb.h>
#include <ifaddrs.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include "net_info.h" 

void print_net_info(const char *hostname)
{
        struct hostent *host = gethostbyname(hostname);
        struct ifaddrs *ifaddr, *ifa;
        uint8_t i;

        if (host == NULL) {
                perror("\033[036m|\033[0m \033[031mgethostbyname\033[0m");
                printf("\033[036m|____________\033[0m\n\n"); 
                exit(1);
        } else {
                printf("\033[036m|\033[0m Host Name: %s\n", host->h_name);
                printf("\033[036m|\033[0m IP Address: ");
                
                for (i = 0; host->h_addr_list[i] != NULL; ++i) {
                        printf("%s ", inet_ntoa(*(struct in_addr *)host->h_addr_list[i]));
                }
                
                printf("\n");
        }

        if (getifaddrs(&ifaddr) == -1) {
                perror("getifaddrs");
                exit(1);
        }
    
        for (ifa = ifaddr; ifa != NULL; ifa = ifa->ifa_next) {
                if (ifa->ifa_addr != NULL && ifa->ifa_addr->sa_family == AF_INET) {
                        printf("\033[036m|\033[0m Interface: %s\n", ifa->ifa_name);
                        printf("\033[036m|\033[0m Address: %s\n", inet_ntoa(((struct sockaddr_in*)ifa->ifa_addr)->sin_addr));
                        printf("\033[036m|\033[0m Netmask: %s\n", inet_ntoa(((struct sockaddr_in*)ifa->ifa_netmask)->sin_addr));
                }
        }

        printf("\033[036m|____________\033[0m\n\n"); 

        freeifaddrs(ifaddr);
}
