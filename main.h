#ifndef __MAIN_H__
#define __MAIN_H__

#include <windows.h>
#include <string>
#include <stdio.h>
#pragma comment(lib, "ws2_32.lib")
using namespace std;
/*  To use this exported function of dll, include this header
 *  in your project.
 */

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif


#ifdef __cplusplus
extern "C"
{
#endif
DLL_EXPORT char* qq_HttpGet(char *szUrl, bool download_data, char* download_data_name);

#ifdef __cplusplus
}
#endif

#endif // __MAIN_H__


