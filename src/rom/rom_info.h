#include <stdio.h>
#include <sys/statvfs.h>

void print_rom_info(void) {
    struct statvfs fs_info;

    printf(" ____________\n");
    printf("|\n");
    printf("| ROM Info:\n");
    printf("|____________\n");
    printf("|\n");
    if (statvfs("/", &fs_info) == 0) {
        printf("| Total Disk Space: %ld MiB\n", fs_info.f_blocks * fs_info.f_bsize
        / 1024 / 1024);
        printf("| Free Disk Space: %ld MiB\n", fs_info.f_bfree * fs_info.f_bsize /
        1024 / 1024);
        printf("| Used Disk Space: %ld MiB\n", (fs_info.f_blocks -
        fs_info.f_bfree) * fs_info.f_bsize / 1024 / 1024);
        printf("|____________\n\n");
    }
}
