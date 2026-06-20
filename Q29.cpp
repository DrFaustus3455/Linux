#include <iostream>
using namespace std;

int main()
{
    int blockSize[] = {100, 500, 200, 300, 600};
    int processSize[] = {212, 417, 112, 426};

    int m = 5, n = 4;

    int allocation[4];

    for (int i = 0; i < n; i++)
        allocation[i] = -1;

    for (int i = 0; i < n; i++)
    {
        int worstIdx = -1;

        for (int j = 0; j < m; j++)
        {
            if (blockSize[j] >= processSize[i])
            {
                if (worstIdx == -1 ||
                    blockSize[j] > blockSize[worstIdx])
                    worstIdx = j;
            }
        }

        if (worstIdx != -1)
        {
            allocation[i] = worstIdx;
            blockSize[worstIdx] -= processSize[i];
        }
    }

    cout << "Process\tSize\tBlock\n";

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "\t"
             << processSize[i] << "\t";

        if (allocation[i] != -1)
            cout << allocation[i] + 1;
        else
            cout << "Not Allocated";

        cout << endl;
    }

    return 0;
}