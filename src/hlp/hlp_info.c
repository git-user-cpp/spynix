/*
 *   Copyright 2024 Andrew Kushyk
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 */

#include <stdio.h>
#include "hlp_info.h" 

void print_banner(void)
{
        printf("\033[34m\n \
         ____                    _\n \
        / ___| _ __  _   _ _ __ (_)_  __\n \
        \\___ \\| '_ \\| | | | '_ \\| \\ \\/ /\n \
         ___) | |_) | |_| | | | | |>  <\n \
        |____/| .__/ \\__, |_| |_|_/_/\\_\\\n \
              |_|    |___/\033[0m\n\n");
}

void print_logo(void)
{
        printf("\033[34mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNK0OkxxdddddxkkO0KNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n\
MMMMMMMMMMMMMMMMMMMMMMMWXKOxdoc:;,,''''''''',,;:codxOKXWMMMMMMMMMMMMMMMMMMMMMMM\n\
MMMMMMMMMMMMMMMMMMMWKOdl;,'',;:clooooddddoooollc:;''',:ldOKWMMMMMMMMMMMMMMMMMMM\n\
MMMMMMMMMMMMMMMMN0dc,.',:loxkOOOOOOOOOOOOOOOOOOOOkxdoc;'..,cd0NMMMMMMMMMMMMMMMM\n\
MMMMMMMMMMMMMW0d:'.':oxOOOOOkkxdollcc::::ccclodxkkOOO0Okoc,..':d0WMMMMMMMMMMMMM\033[0m\n");
        printf("\033[34mMMMMMMMMMMWXkl'.':okOOOOkxoc;'...''.........'...',:ldkOOO0Oxl,..,lkNWMMMMMMMMMM\n\
MMMMMMMMMXk:..,lxOOOOxo:'.  ......,;:lllc:;'....'. ...;lxkOOOOd:...:kNMMMMMMMMM\n\
MMMMMMMNO:..,okOkOkd:.  .' .;cc:::;'......,:loxO0o..;.  .,lxOkOOxc...:OWMMMMMMM\n\
MMMMMWKo'.'lkOkOkl'   .,c. ..  ..';cclodddxdooodOO;.;c..   .:dOkkOx:..'oKMMMMMM\n\
MMMMWO;..:xOkkko'   ..,l,  .         .','..',;clx0x..cl,..   .:xOkkOd,..;OWMMMM\033[0m\n");
        printf("\033[34mMMMNx'..lOkkkx;   ..';lc.                ...',;cldk; 'oc,,...  .ckkkOk:..,xNMMM\n\
MMNd'.'dOxkkl.  ..',;lo'                    ..',;co:. :oc;;'..   ,dkxkOl..'dNMM\n\
MWx'.'dkxkk:. ..,::ccc,                    ...';:lkk, .:cc:::,'.  .okxxOl..'xWM\n\
WO, .okxkk:   .',,,;;,'.              ......';:codk0xc::;;;,,,'.   .lkxxkc..,OW\n\
K:..ckxxk:  ...,clcc:,..          ...',,;;:cclooooddxkOO00Oko:'...  .okdxx; .cK\033[0m\n");
        printf("\033[34mx. ,dxdkl.  .','..      .......'''''',,,;;;:::cclllllcc:;,'..',,'.   'dxdxo. .x\n\
:..cxdxd'   ..';:::;.       ..........''''...'''....     '::c:,'..    :xddx; .:\n\
' 'odoxl.   ...',;co'      ..,,'.           .',;'.      .co:;,''...   'odoxl. '\n\
. ,ddox;    ...',;co, ..  .ck0K0d;.       .'lOKKOo,.  '..co:;,'....   .ldldo' .\n\
. ;dood,    ...',;:oc.'' ':oOKXKkc;. ;l:'.,:d0KX0xc;..,.'ol:;,''...    cdloo' .\033[0m\n");
        printf("\033[34m. ;dood,    ...',,;co;.. .;cloolc:,..lkk: .:cloolc:'....co:;,,'....    :dloo' .\n\
. ,oold;    ...',;;:lo;   ..'''''.  .oO0l. ..'','''.  .loc:;,,'....   .cocol. .\n\
. .lococ.   ...',;:lll;.            .o00o.......';o:  'cloc:;,'...    .llcoc. .\n\
; .:ocll'    ..,:c:,'',c;...         .,'..,;::cldOx'.c:'.';:c:;'..    ,lcco;  :\n\
d. 'lc:l:.  .',,'.':oxdc'  .          .',;:::cloxk: .;oxdl;..',,'.   .cl:lc. .d\033[0m\n");
        printf("\033[34mK; .:l::l,  '.. ,okdc'.     .         'cloc::clxkc.    .,lxko, ..'.  ;c::l,  :K\n\
Wk' .cc;:c' ....,xx,.        ..       .,;llccldx:        .;kk;....  ,c;;c:. 'kW\n\
MNd. .cc,;c'  .'..:l;.               ...',:cooc.        .:dl...'.  ,c;,c:. .dNM\n\
MMNo. .::,;:;. .'..'c:.            ..,;::cc:;.         .:l,..,.  .,:,,::. .oNMM\n\
MMMNd. .;:,'::.  .'..,:'.            ......          .'::..''.  .;;',:;. .dNMMM\033[0m\n");
        printf("\033[34mMMMMNx' .,:,',:,. .....;,.                          .,:'..'.  .;;'';:'. 'kWMMMM\n\
MMMMMW0:. .;;'.,;,.    .',.                        .,,. ..  .,;,.';,. .c0WMMMMM\n\
MMMMMMMNx,. .;;'.,;,..   .'.                      .,.    .',;'.';,. .,xNMMMMMMM\n\
MMMMMMMMWXd,. .,,,..,;,'. ...                    ...  .',,,..,,,. .,dXMMMMMMMMM\n\
MMMMMMMMMMWXd;. .',,'..,,,,'..                  ...'',,'..',,.. .;xXWMMMMMMMMMM\033[0m\n");
        printf("\033[34mMMMMMMMMMMMMMNOl'. ..'''...',,,,''''''''''''''',,,''..''''.. .'lONMMMMMMMMMMMMM\n\
MMMMMMMMMMMMMMMWXkl,. ......'''...'''''''''......''.....  .,lkXWMMMMMMMMMMMMMMM\n\
MMMMMMMMMMMMMMMMMMWN0dc,.. ........................  ..,cd0NWMMMMMMMMMMMMMMMMMM\n\
MMMMMMMMMMMMMMMMMMMMMMWNKOdl:,'...           ...',:ldOKNWMMMMMMMMMMMMMMMMMMMMMM\n\
MMMMMMMMMMMMMMMMMMMMMMMMMMMMWNKOkdlc:::::::cldkOKNWMMMMMMMMMMMMMMMMMMMMMMMMMMMM\033[0m\n");
}

void print_err_info(void)
{
        printf("Use spynix \033[31m-h\033[0m or spynix \033[31m--help\033[0m to display all valid options\n");
}

void print_hlp_info(void)
{
        print_banner();
        printf("\033[36mSpynix is a commandline tool for gathering info about \
hardware.\033[0m\n\n\
\t\t\033[033mInfo:\033[0m\n\
\t\t\t-h or --help \t\t- show this menu\n\
\t\t\t-v or --version \t- show version\n\
\t\t\t-b or --banner \t\t- show ASCII banner\n\
\t\t\t-l or --logo \t\t- show ASCII logo\n\n");
        printf("\t\t\033[033mOptions:\033[0m\n\
\t\t\t-a or --all \t- show summary info about system, cpu, ram and rom\n\
\t\t\t-sys \t\t- show system info\n\
\t\t\t-cpu \t\t- show short Central Processing Unit info\n\
\t\t\t-ram \t\t- show Random Access Memory info\n\
\t\t\t-rom \t\t- show Read Only Memory info\n\
\t\t\t-net \t\t- show network info\n\n\
\t\t\033[033mAdvanced:\033[0m\n\
\t\t-cpu -f or -cpu --full \t- show full Central Processing Unit info\n");
}

void print_ver_info(void)
{
        print_banner();
        printf("spynix v4.2.0\n\nFor more info visit: \
\033[36mhttps://github.com/git-user-cpp/spynix\033[0m\n");
}

