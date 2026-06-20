#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

using namespace std;

int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int key = 50;

    pid_t pid = fork();

    if (pid == 0)
    {
        cout << "Child Process\n";
        cout << "Key to Search = " << key << endl;
    }
    else
    {
        wait(NULL);

        bool found = false;

        for (int i = 0; i < 10; i++)
        {
            if (arr[i] == key)
            {
                found = true;
                break;
            }
        }

        if (found)
            cout << "Parent: Key Found" << endl;
        else
            cout << "Parent: Key Not Found" << endl;
    }

    return 0;
}