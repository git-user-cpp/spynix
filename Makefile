spynix: clear
	@clang src/main.c src/cpu/cpu_info.c src/hlp/hlp_info.c src/net/net_info.c src/ram/ram_info.c src/rom/rom_info.c src/sys/sys_info.c -o spynix -Wall -ansi -pedantic

clear:
	@rm -f spynix
