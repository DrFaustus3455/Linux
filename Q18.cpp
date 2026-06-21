#include <iostream>
#include <thread>

using namespace std;

class Functor
{
public:
    void operator()()
    {
        for(int i = 1; i <= 5; i++)
        {
            cout << "Operating Systems Lab" << endl;
        }
    }
};

int main()
{
    thread t{Functor()};

    t.join();

    return 0;
}
