#include <stdio.h>
#include <sys/utsname.h>

void print_system_info(struct utsname *sys_info) {
    uname(sys_info);
    printf("System Name: %s\n", sys_info->sysname);
    printf("Host Name: %s\n", sys_info->nodename);
    printf("Kernel Release: %s\n", sys_info->release);
    printf("System Version: %s\n", sys_info->version);
    printf("Machine Type: %s\n", sys_info->machine);
}
