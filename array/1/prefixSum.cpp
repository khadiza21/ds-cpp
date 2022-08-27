#include <bits/stdc++.h>
using namespace std;

// pre[i] = ar[i] + pre[i-1]
// pre[j] - pre[i-1] if (i != 0)

int main()
{
    int array[5] = {12, 23, 12, 41, 23};
    int pre[5];
    pre[0] = array[0];

    for (int i = 1; i < 5; i++)
    {
        pre[i] = array[i] + pre[i - 1];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << pre[i] << " ";
    }

    return 0;
}