#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    execlp("pwd", "pwd", NULL);

    cout << "Execution Failed" << endl;

    return 0;
}