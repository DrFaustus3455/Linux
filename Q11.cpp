#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    pid_t pid = fork();

    if (pid == 0)
    {
        cout << "Child Process Terminated\n";
        return 0;
    }
    else
    {
        cout << "Parent Sleeping for 20 Seconds\n";
        sleep(20);

        cout << "Parent Exiting\n";
    }

    return 0;
}