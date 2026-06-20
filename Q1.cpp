#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    pid_t pid = fork();

    if (pid < 0)
    {
        cout << "Fork Failed\n";
    }
    else if (pid == 0)
    {
        cout << "Child Process\n";
        cout << "PID  : " << getpid() << endl;
        cout << "PPID : " << getppid() << endl;
    }
    else
    {
        cout << "Parent Process\n";
        cout << "PID  : " << getpid() << endl;
        cout << "PPID : " << getppid() << endl;
    }

    return 0;
}