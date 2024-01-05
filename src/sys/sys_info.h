#include <stdio.h>
#include <sys/utsname.h>

void print_sys_info() {
    struct utsname sys_info;
    uname(&sys_info);
    printf(" ____________\n");
    printf("|\n");
    printf("| System Info\n");
    printf("|____________\n");
    printf("|\n");
    printf("| System Name: %s\n", sys_info.sysname);
    printf("| Host Name: %s\n", sys_info.nodename);
    printf("| Kernel Release: %s\n", sys_info.release);
    printf("| System Version: %s\n", sys_info.version);
    printf("| Machine Type: %s\n", sys_info.machine);
    printf("|____________\n\n");
}
