#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    fork();
    fork();

    cout << "Process PID = " << getpid()
         << " Parent PID = " << getppid()
         << endl;

    return 0;
}