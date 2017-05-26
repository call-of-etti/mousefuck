#include <stdlib.h>
#include <windows.h>
#include <winuser.h>


DWORD screenWidth;
DWORD screenHeight;


void determineScreensize()
{
    screenWidth = GetSystemMetrics(SM_CXSCREEN);
    screenHeight = GetSystemMetrics(SM_CYSCREEN);
}


void run()
{
    for (;;)
    {
        SetCursorPos((rand() % screenWidth), (rand() % screenHeight));
        Sleep(1);
    }
}


int main(int argc, char *argv[])
{
    determineScreensize();
    srand(time(NULL));
   
    run();

    return 0;
}
