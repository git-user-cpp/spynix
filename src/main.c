#include "sys/system_info.h"
#include "ram/ram_info.h"
#include "cpu/cpu_info.h"

int main() {
    struct utsname system_info;
    struct sysinfo mem_info;

    print_system_info(&system_info);
    print_ram_info(&mem_info);
    print_cpu_info();

    return 0;
}

