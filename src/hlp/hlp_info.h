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
            -h or --help \t- show this menu\n\t \
            -v or --version \t- show version\n\t \
            -b or --banner \t- show ASCII banner\n\n \
            Options:\n\t \
            -a or --all \t- show summary info about system, cpu, ram and rom\n\t \
            -sys \t\t- show system info\n\t \
            -cpu \t\t- show short Central Processing Unit info\n\t \
            -ram \t\t- show Random Access Memory info\n\t \
            -rom \t\t- show Read Only Memory info\n\t \
            -net \t\t- show network info\n\n \
            Advanced:\n\t \
            -cpu -f or -cpu --full \t- show full Central Processing Unit info\n");
}

void print_ver_info() {
    print_banner();
    printf("spynix v2.1.0\n\nFor more info visit: https://github.com/git-user-cpp/spynix\n");
}
