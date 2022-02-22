#define _WIN32_WINNT 0x0A00

#include <iostream>
#include <Windows.h>
#include <WinUser.h>
#include <shellapi.h>
#include <winreg.h>
#include <fileapi.h>
#include <cstdio>
#include <stdlib.h>
#include <string>
#include <WinBase.h>
#include <direct.h>
#include <filesystem>
#include <string>
#include <Shlwapi.h>
#include <fstream>

#pragma comment(lib, "Winmm.lib")
#pragma comment(lib, "Urlmon.lib")

using namespace std;

int main() {
    system("$Dont_tell_me_youre_too_blind_to_see = $env:TEMP + ""\\Dont_tell_me_youre_too_blind_to_see");
    system("mkdir \\Dont_tell_me_youre_too_blind_to_see");

}