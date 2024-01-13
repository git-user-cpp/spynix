#include <ifaddrs.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>

void print_net_info(char *hostname){
    struct hostent *host = gethostbyname(hostname);
    if(host == NULL){
        perror("gethostbyname");
        exit(1);
    } else {
        printf("Host Name: %s\n", host->h_name);
        printf("IP Address: ");
        for(int i = 0; host->h_addr_list[i] != NULL; i++){
            printf("%s ", inet_ntoa(*(struct in_addr *)host->h_addr_list[i]));
        }
        printf("\n");
    }

    struct ifaddrs *ifaddr, *ifa;
    if(getifaddrs(&ifaddr) == -1) {
        perror("getifaddrs error");
        exit(1);
    }
    for(ifa = ifaddr; ifa != NULL; ifa = ifa->ifa_next){
        if(ifa->ifa_addr != NULL && ifa->ifa_addr->sa_family == AF_INET){
            printf("Interface: %s\n", ifa->ifa_name);
            printf("Address: %s\n", inet_ntoa(((struct sockaddr_in*)ifa->ifa_addr)->sin_addr));
            printf("Netmask: %s\n", inet_ntoa(((struct sockaddr_in*)ifa->ifa_netmask)->sin_addr));
        }
    }

    freeifaddrs(ifaddr);
}
