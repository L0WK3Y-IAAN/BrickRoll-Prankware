#include <iostream>
#include <cstdio>
#include <urlmon.h>
#include <string>

#pragma comment(lib, "urlmon.lib")

using namespace std;

int main()
{
    IStream *stream;


    const char* dwnld_URL = "https://cdn.pixabay.com/photo/2014/12/28/13/20/wordpress-581849_960_720.jpg";
    if (S_OK != URLOpenBlockingStreamA(0, dwnld_URL, &stream, 0, 0))
    {
        printf("Error opening");
        return -1;
    }

    char *buff;

    string s;

    unsigned long bytesRead;

    while (true)
    {
        stream->Read(buff, &bytesRead);

        if (0U == bytesRead)
        {
            break;
        }
        s.append(buff, bytesRead);
    }

    stream -> Release();

    printf(s);
    return 0;
}