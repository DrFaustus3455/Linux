#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

using namespace std;

int main()
{
    pid_t pid = fork();

    if (pid == 0)
    {
        cout << "Child Process Executing date Command\n";
        execlp("date", "date", NULL);

        perror("execlp failed");
    }
    else
    {
        cout << "Parent PID: " << getpid() << endl;
        wait(NULL);
    }

    return 0;
}