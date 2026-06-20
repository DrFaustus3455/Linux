#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    cout << "Directory Contents:\n";

    execl("/bin/ls", "ls", "-l", NULL);

    cout << "Execution Failed" << endl;

    return 0;
}