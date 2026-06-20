#include <iostream>
#include <thread>
using namespace std;

bool flag[2] = {false, false};
int turn;

void process(int id)
{
    int other = 1 - id;

    for (int i = 0; i < 5; i++)
    {
        flag[id] = true;
        turn = other;

        while (flag[other] && turn == other)
            ;

        // Critical Section
        cout << "Process " << id
             << " Entering Critical Section\n";

        for (int j = 0; j < 1000000; j++)
            ;

        cout << "Process " << id
             << " Leaving Critical Section\n";

        flag[id] = false;
    }
}

int main()
{
    thread t1(process, 0);
    thread t2(process, 1);

    t1.join();
    t2.join();

    return 0;
}