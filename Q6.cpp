#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

using namespace std;

int main()
{
    pid_t pid = fork();

    if (pid == 0)
    {
        cout << "Loading Data..." << endl;
        sleep(2);
        cout << "Data Loaded Successfully" << endl;
    }
    else
    {
        wait(NULL);
        cout << "Processing Data..." << endl;
    }

    return 0;
}