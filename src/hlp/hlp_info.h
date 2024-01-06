#include <stdio.h>

void print_banner() {
    printf("\n \
     ____                    _\n \
    / ___| _ __  _   _ _ __ (_)_  __\n \
    \\___ \\| '_ \\| | | | '_ \\| \\ \\/ /\n \
     ___) | |_) | |_| | | | | |>  <\n \
    |____/| .__/ \\__, |_| |_|_/_/\\_\\\n \
          |_|    |___/\n\n");
}

void print_err_info() {
    printf("Use spynix -h or spynix --help to display all valid options\n");
}

void print_hlp_info() {
    print_banner();
    printf("Spynix is a commandline tool for gathering info about hardware.\n\n \
            Info:\n\t \
            -h or --help - show this menu\n\t \
            -v or --version - show version\n\t \
            -b or --banner - show ASCII banner\n\n \
            Options:\n\t \
            -a or --all - show summary info about system, cpu, ram and rom\n\t \
            -sys - show system info\n\t \
            -cpu - show short Central Process Unit info\n\t \
            -ram - show Random Access Memory info\n\t \
            -rom - show Read Only Memory info\n\n \
            Advanced:\n\t \
            -cpu -f or -cpu --full - show full Central Process Unit info\n");
}

void print_ver_info() {
    print_banner();
    printf("spynix v2.0.0\n\nFor more info visit: https://github.com/git-user-cpp/spynix\n");
}
