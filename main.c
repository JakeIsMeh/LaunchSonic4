#include <windows.h>

int main() {
    WinExec("java -jar SonicLauncher.jar", SW_HIDE);
    return 1;
}