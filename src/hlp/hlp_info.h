#include <stdio.h>

void print_err_info() {
    printf("Use spynix -h to display all valid options\n");
}

void print_hlp_info() {
    printf("spynix v2.0.0\n \
            Info:\n\t \
            -h - show this menu\n\t \
            -v - show version\n\n \
            Options:\n\t \
            -a - show summary info about system, cpu, ram and rom\n\t \
            -sys - show system info\n\t \
            -cpu - show short Central Process Unit info\n\t \
            -ram - show Random Access Memory info\n\t \
            -rom - show Read Only Memory info\n\n \
            Advanced:\n\t \
            -cpu -f - show full Central Process Unit info\n");
}

void print_ver_info() {
    printf("spynix v2.0.0\n\nFor more info visit: https://github.com/git-user-cpp/spynix");
}
