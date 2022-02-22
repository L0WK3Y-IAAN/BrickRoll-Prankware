#include <stdio.h>
#include <Windows.h>
#include <string.h>
#pragma comment(lib, "urlmon.lib")

int main()
{
    char *dwnld_URL = "https://i.ytimg.com/vi/8-58S8e2kQ4/maxresdefault.jpg";
    char *savepath = "C:\\tmp\\roll.jpg";
    URLDownloadToFile(NULL, dwnld_URL.c_str(), savepath.c_str(), 0, NULL);

    return 0;
}