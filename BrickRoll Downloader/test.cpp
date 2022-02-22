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
#pragma comment(lib, "Urlmon.lib")

using namespace std;

int main()
{
    // URL of the music file, image file etc.
    const wchar_t* sURL = L"https://i.ytimg.com/vi/8-58S8e2kQ4/maxresdefault.jpg";
    // Name of the Destination file 
    const wchar_t* dFile = L"image.jpg";
    URLDownloadToFile(NULL, sURL, dFile, 0, NULL);
    return 0;
}