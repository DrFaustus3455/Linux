#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

using namespace std;

int main()
{
    pid_t pid = fork();

    if (pid == 0)
    {
        cout << "Generating Report..." << endl;

        sleep(5);

        cout << "Report Generated Successfully" << endl;
    }
    else
    {
        cout << "Parent Waiting..." << endl;

        wait(NULL);

        cout << "Parent Received Report" << endl;
    }

    return 0;
}