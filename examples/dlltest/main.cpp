#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
typedef char* (*DLLFUNC1)(char*, bool, char*);
DLLFUNC1 httpAPI;
DWORD L;

int main()
{
    cout << "Witaj swiecie!" << endl;
    HMODULE hDll;
    hDll = LoadLibrary( "qqhttp.dll" );//
    if(hDll != NULL)
    {
       cout << "Wczytano dll qqhttp!" << endl;
       httpAPI = (DLLFUNC1) GetProcAddress( hDll, "qq_HttpGet");
       char* xdd = debug_func();
       cout << xdd << endl;
       if(httpAPI != NULL)
       {
           cout << "Znaleziono funkcje qq_HttpGet!" << endl;
           char* wynik = httpAPI("http://sebaqq6.pl/api.php", false, "lolz.txt");
           cout << wynik << endl;
       }
       FreeLibrary(hDll);
    }
    else
    {
        cout << "Nie wczytano dll" << endl;
    }
    return 0;
}


