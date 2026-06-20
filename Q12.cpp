#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    pid_t pid = fork();

    if (pid == 0)
    {
        cout << "Child PID: " << getpid() << endl;
        cout << "Before Orphan PPID: " << getppid() << endl;

        sleep(5);

        cout << "After Orphan PPID: " << getppid() << endl;
    }
    else
    {
        cout << "Parent Exiting\n";
        return 0;
    }

    return 0;
}