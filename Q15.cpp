#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

using namespace std;

int main()
{
    pid_t pid = fork();

    if (pid == 0)
    {
        cout << "Child PID: "
             << getpid()
             << endl;
    }
    else
    {
        wait(NULL);

        cout << "Executing pwd...\n";

        execlp("pwd", "pwd", NULL);

        perror("Execution Failed");
    }

    return 0;
}