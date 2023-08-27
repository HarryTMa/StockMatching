#include <fcntl.h>
#ifdef _WIN32
#   include <winsock2.h>
#   include <windows.h>
#else
#   include <sys/socket.h>
#endif
#include <stdio.h>
#include <stdlib.h>
int main(int, char**) {
    system("python3 enum_days.py");
    return 0;
}
