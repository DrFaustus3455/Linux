#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    cout << "Current User:\n";

    execlp("whoami", "whoami", NULL);

    perror("Execution Failed");

    return 0;
}