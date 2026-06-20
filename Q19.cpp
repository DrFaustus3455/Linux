#include <iostream>
#include <thread>

using namespace std;

int main()
{
    thread t([]()
             {
        for(int i=1;i<=10;i++)
        {
            cout << i << "^2 = "
                 << i*i
                 << endl;
        } });

    t.join();

    return 0;
}