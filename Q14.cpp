#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    fork();
    fork();
    fork();

    cout << "PID: "
         << getpid()
         << " PPID: "
         << getppid()
         << endl;

    return 0;
}