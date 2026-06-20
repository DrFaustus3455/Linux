#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    pid_t pid = fork();

    if (pid < 0)
    {
        cout << "Fork Failed!" << endl;
    }
    else if (pid == 0)
    {
        cout << "This is Child Process" << endl;
    }
    else
    {
        cout << "This is Parent Process" << endl;
    }

    return 0;
}