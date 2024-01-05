#include "sys/sys_info.h"
#include "ram/ram_info.h"
#include "cpu/cpu_info.h"
#include "rom/rom_info.h"

int main() {
    print_sys_info();
    print_cpu_info();
    print_ram_info();
    print_rom_info();

    return 0;
}

