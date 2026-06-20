#include <iostream>
#include <thread>

using namespace std;

void printNumbers()
{
    for (int i = 1; i <= 10; i++)
        cout << i << " ";
    cout << endl;
}

void printAlphabets()
{
    for (char ch = 'A'; ch <= 'J'; ch++)
        cout << ch << " ";
    cout << endl;
}

int main()
{
    thread t1(printNumbers);
    thread t2(printAlphabets);

    t1.join();
    t2.join();

    return 0;
}