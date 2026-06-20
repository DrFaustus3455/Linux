#include <iostream>
#include <thread>
#include <unistd.h>

using namespace std;

void detachedTask()
{
    for (int i = 1; i <= 5; i++)
    {
        cout << "Detached Thread Running..."
             << endl;

        sleep(1);
    }
}

int main()
{
    thread t(detachedTask);

    t.detach();

    cout << "Main Thread Continues Execution"
         << endl;

    sleep(6);

    return 0;
}