#include <stdio.h>
#include <sys/sysinfo.h>

void print_ram_info() {
    struct sysinfo sys_info;
    sysinfo(&sys_info);
    printf("Uptime: %ld Hours\n", sys_info.uptime / 60 / 60);
    printf("Total RAM: %ld MiB\n", sys_info.totalram * sys_info.mem_unit /
    1024 / 1024);
    printf("Free RAM: %ld MiB\n", sys_info.freeram * sys_info.mem_unit / 1024
    / 1024);
}
