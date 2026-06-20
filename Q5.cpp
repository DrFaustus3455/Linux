#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

using namespace std;

int main()
{
    pid_t pid = fork();

    if (pid == 0)
    {
        for (int i = 1; i <= 5; i++)
        {
            cout << i << endl;
            sleep(1);
        }
    }
    else
    {
        wait(NULL);
        cout << "Child execution completed." << endl;
    }

    return 0;
}