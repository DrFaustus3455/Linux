#include <iostream>
#include <thread>

using namespace std;

bool flag[2] = {false, false};
int turn;
int sharedVar = 0;

void update(int id)
{
    int other = 1 - id;

    for (int i = 0; i < 100000; i++)
    {
        flag[id] = true;
        turn = other;

        while (flag[other] && turn == other)
            ;

        sharedVar++;

        flag[id] = false;
    }
}

int main()
{
    thread t1(update, 0);
    thread t2(update, 1);

    t1.join();
    t2.join();

    cout << "Shared Variable = "
         << sharedVar
         << endl;

    return 0;
}