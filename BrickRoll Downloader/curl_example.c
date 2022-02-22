#include </vcpkg-master/packages/curl_x86-windows/include/curl/curl.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    CURL *curl;
    FILE *fp;
    int result;
    
    fp = fopen("rickroll.jpg", "wb");

    curl = curl_easy_init();
    curl_easy_setopt(curl, CURLOPT_URL, "https://i.ytimg.com/vi/8-58S8e2kQ4/maxresdefault.jpg");
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);

    result = curl_easy_perform(curl);

    if(result == CURLE_OK)
    {
        printf("Download Successful!\n"); 
    }
    else
    {
        printf("ERROR: %s\n", curl_easy_strerror(result));
    }

}