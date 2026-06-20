#include <iostream>
#include <thread>

using namespace std;

void factorial(int n)
{
    long long fact = 1;

    for (int i = 1; i <= n; i++)
        fact *= i;

    cout << "Factorial = "
         << fact
         << endl;
}

int main()
{
    int num;

    cout << "Enter Number: ";
    cin >> num;

    thread t(factorial, num);

    t.join();

    return 0;
}