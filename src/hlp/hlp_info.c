/*
 * Copyright 2024 Andrew Kushyk
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 */

#include "hlp_info.h" 

void print_banner(void)
{
    printf("\n \
     ____                    _\n \
    / ___| _ __  _   _ _ __ (_)_  __\n \
    \\___ \\| '_ \\| | | | '_ \\| \\ \\/ /\n \
     ___) | |_) | |_| | | | | |>  <\n \
    |____/| .__/ \\__, |_| |_|_/_/\\_\\\n \
          |_|    |___/\n\n");
}

void print_logo(void)
{
printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNK0OkxxdddddxkkO0KNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n\
MMMMMMMMMMMMMMMMMMMMMMMWXKOxdoc:;,,''''''''',,;:codxOKXWMMMMMMMMMMMMMMMMMMMMMMM\n\
MMMMMMMMMMMMMMMMMMMWKOdl;,'',;:clooooddddoooollc:;''',:ldOKWMMMMMMMMMMMMMMMMMMM\n\
MMMMMMMMMMMMMMMMN0dc,.',:loxkOOOOOOOOOOOOOOOOOOOOkxdoc;'..,cd0NMMMMMMMMMMMMMMMM\n\
MMMMMMMMMMMMMW0d:'.':oxOOOOOkkxdollcc::::ccclodxkkOOO0Okoc,..':d0WMMMMMMMMMMMMM\n");
printf("MMMMMMMMMMWXkl'.':okOOOOkxoc;'...''.........'...',:ldkOOO0Oxl,..,lkNWMMMMMMMMMM\n\
MMMMMMMMMXk:..,lxOOOOxo:'.  ......,;:lllc:;'....'. ...;lxkOOOOd:...:kNMMMMMMMMM\n\
MMMMMMMNO:..,okOkOkd:.  .' .;cc:::;'......,:loxO0o..;.  .,lxOkOOxc...:OWMMMMMMM\n\
MMMMMWKo'.'lkOkOkl'   .,c. ..  ..';cclodddxdooodOO;.;c..   .:dOkkOx:..'oKMMMMMM\n\
MMMMWO;..:xOkkko'   ..,l,  .         .','..',;clx0x..cl,..   .:xOkkOd,..;OWMMMM\n");
printf("MMMNx'..lOkkkx;   ..';lc.                ...',;cldk; 'oc,,...  .ckkkOk:..,xNMMM\n\
MMNd'.'dOxkkl.  ..',;lo'                    ..',;co:. :oc;;'..   ,dkxkOl..'dNMM\n\
MWx'.'dkxkk:. ..,::ccc,                    ...';:lkk, .:cc:::,'.  .okxxOl..'xWM\n\
WO, .okxkk:   .',,,;;,'.              ......';:codk0xc::;;;,,,'.   .lkxxkc..,OW\n\
K:..ckxxk:  ...,clcc:,..          ...',,;;:cclooooddxkOO00Oko:'...  .okdxx; .cK\n");
printf("x. ,dxdkl.  .','..      .......'''''',,,;;;:::cclllllcc:;,'..',,'.   'dxdxo. .x\n\
:..cxdxd'   ..';:::;.       ..........''''...'''....     '::c:,'..    :xddx; .:\n\
' 'odoxl.   ...',;co'      ..,,'.           .',;'.      .co:;,''...   'odoxl. '\n\
. ,ddox;    ...',;co, ..  .ck0K0d;.       .'lOKKOo,.  '..co:;,'....   .ldldo' .\n\
. ;dood,    ...',;:oc.'' ':oOKXKkc;. ;l:'.,:d0KX0xc;..,.'ol:;,''...    cdloo' .\n");
printf(". ;dood,    ...',,;co;.. .;cloolc:,..lkk: .:cloolc:'....co:;,,'....    :dloo' .\n\
. ,oold;    ...',;;:lo;   ..'''''.  .oO0l. ..'','''.  .loc:;,,'....   .cocol. .\n\
. .lococ.   ...',;:lll;.            .o00o.......';o:  'cloc:;,'...    .llcoc. .\n\
; .:ocll'    ..,:c:,'',c;...         .,'..,;::cldOx'.c:'.';:c:;'..    ,lcco;  :\n\
d. 'lc:l:.  .',,'.':oxdc'  .          .',;:::cloxk: .;oxdl;..',,'.   .cl:lc. .d\n");
printf("K; .:l::l,  '.. ,okdc'.     .         'cloc::clxkc.    .,lxko, ..'.  ;c::l,  :K\n\
Wk' .cc;:c' ....,xx,.        ..       .,;llccldx:        .;kk;....  ,c;;c:. 'kW\n\
MNd. .cc,;c'  .'..:l;.               ...',:cooc.        .:dl...'.  ,c;,c:. .dNM\n\
MMNo. .::,;:;. .'..'c:.            ..,;::cc:;.         .:l,..,.  .,:,,::. .oNMM\n\
MMMNd. .;:,'::.  .'..,:'.            ......          .'::..''.  .;;',:;. .dNMMM\n");
printf("MMMMNx' .,:,',:,. .....;,.                          .,:'..'.  .;;'';:'. 'kWMMMM\n\
MMMMMW0:. .;;'.,;,.    .',.                        .,,. ..  .,;,.';,. .c0WMMMMM\n\
MMMMMMMNx,. .;;'.,;,..   .'.                      .,.    .',;'.';,. .,xNMMMMMMM\n\
MMMMMMMMWXd,. .,,,..,;,'. ...                    ...  .',,,..,,,. .,dXMMMMMMMMM\n\
MMMMMMMMMMWXd;. .',,'..,,,,'..                  ...'',,'..',,.. .;xXWMMMMMMMMMM\n");
printf("MMMMMMMMMMMMMNOl'. ..'''...',,,,''''''''''''''',,,''..''''.. .'lONMMMMMMMMMMMMM\n\
MMMMMMMMMMMMMMMWXkl,. ......'''...'''''''''......''.....  .,lkXWMMMMMMMMMMMMMMM\n\
MMMMMMMMMMMMMMMMMMWN0dc,.. ........................  ..,cd0NWMMMMMMMMMMMMMMMMMM\n\
MMMMMMMMMMMMMMMMMMMMMMWNKOdl:,'...           ...',:ldOKNWMMMMMMMMMMMMMMMMMMMMMM\n\
MMMMMMMMMMMMMMMMMMMMMMMMMMMMWNKOkdlc:::::::cldkOKNWMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
}

void print_err_info(void)
{
    printf("Use spynix -h or spynix --help to display all valid options\n");
}

void print_hlp_info(void)
{
    print_banner();
    printf("Spynix is a commandline tool for gathering info about hardware.\n\n\
\t\tInfo:\n\
\t\t\t-h or --help \t\t- show this menu\n\
\t\t\t-v or --version \t- show version\n\
\t\t\t-b or --banner \t\t- show ASCII banner\n\
\t\t\t-l or --logo \t\t- show ASCII logo\n\n");
    printf("\t\tOptions:\n\
\t\t\t-a or --all \t- show summary info about system, cpu, ram and rom\n\
\t\t\t-sys \t\t- show system info\n\
\t\t\t-cpu \t\t- show short Central Processing Unit info\n\
\t\t\t-ram \t\t- show Random Access Memory info\n\
\t\t\t-rom \t\t- show Read Only Memory info\n\
\t\t\t-net \t\t- show network info\n\n\
\t\tAdvanced:\n\
\t\t-cpu -f or -cpu --full \t- show full Central Processing Unit info\n");
}

void print_ver_info(void)
{
    print_banner();
    printf("spynix v4.0.0\n\nFor more info visit: https://github.com/git-user-cpp/spynix\n");
}
