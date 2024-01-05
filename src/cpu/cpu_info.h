#include <stdio.h>
#include <dirent.h>

void print_cpu_info() {
    printf("CPU Information:\n");

    FILE *cpu_file = fopen("/proc/cpuinfo", "r");
    if (cpu_file) {
        char line[128];
        int lines = 0;
        while (fgets(line, sizeof(line), cpu_file) && lines < 19) {
            printf("%s", line);
            lines++;
        }
        fclose(cpu_file);
    } else {
        printf("Error opening /proc/cpuinfo\n");
    }
}
