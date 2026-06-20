#include <iostream>
#include <thread>

using namespace std;

void task()
{
    cout << "Thread ID: "
         << this_thread::get_id()
         << endl;
}

int main()
{
    cout << "Main Thread ID: "
         << this_thread::get_id()
         << endl;

    thread t1(task);
    thread t2(task);

    t1.join();
    t2.join();

    return 0;
}