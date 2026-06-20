#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

using namespace std;

int main()
{
    string cmd;

    cout << "Enter Command: ";
    cin >> cmd;

    pid_t pid = fork();

    if (pid == 0)
    {
        execlp(cmd.c_str(), cmd.c_str(), NULL);
        perror("Command Failed");
    }
    else
    {
        wait(NULL);
    }

    return 0;
}