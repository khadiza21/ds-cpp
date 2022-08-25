#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    char c;
    cout << "Do you want to search: (Y/N) ";
    cin >> c;

    while (toupper(c) == 'Y')
    {
        int checkvalue, flag = 0;
        cout << "Please inter the value ";
        cin >> checkvalue;
        for (int i = 0; i < size; i++)
        {
            if (array[i] == checkvalue)
            {
                flag = 1;
                cout << "Index No: " << i << "   Position " << i + 1 << " " << endl;
            }
        }
        if (flag == 0)
        {
            cout << "NOT FOUND" << endl;
        }

        cout << "Continue searching: (Y/N) ";
        cin >> c;
    }

    return 0;
}