#include <iostream>
using namespace std;

int main()
{
    int blocks[] = {100, 500, 200, 300, 600};
    int process[] = {212, 417, 112, 426};

    int allocation[4] = {-1, -1, -1, -1};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (blocks[j] >= process[i])
            {
                allocation[i] = j + 1;
                blocks[j] -= process[i];
                break;
            }
        }
    }

    cout << "Process\tBlock\n";

    for (int i = 0; i < 4; i++)
        cout << process[i]
             << "\t"
             << allocation[i]
             << endl;

    return 0;
}