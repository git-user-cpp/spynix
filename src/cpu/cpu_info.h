#include <stdio.h>
#include <dirent.h>

void print_cpu_info() {
    printf(" ____________\n");
    printf("|\n");
    printf("| CPU Info:\n");
    printf("|____________\n");
    printf("|\n");

    FILE *cpu_file = fopen("/proc/cpuinfo", "r");
    if (cpu_file) {
        char line[128];
        int lines = 0;
        while (fgets(line, sizeof(line), cpu_file) && lines < 19) {
            printf("| %s", line);
            lines++;
        }
        fclose(cpu_file);
        printf("|____________\n\n");
    } else {
        printf("Error opening /proc/cpuinfo\n");
    }
}

void print_full_cpu_info() {
    printf(" ____________\n");
    printf("|\n");
    printf("| Full CPU Info:\n");
    printf("|____________\n");
    printf("|\n");

    FILE *cpu_file = fopen("/proc/cpuinfo", "r");
    if (cpu_file) {
        char line[128];
        while (fgets(line, sizeof(line), cpu_file)) {
            printf("| %s", line);
        }
        fclose(cpu_file);
        printf("|____________\n\n");
    } else {
        printf("Error opening /proc/cpuinfo\n");
    }
}

