#include <bits/stdc++.h>
using namespace std;

int binarySearch(int array[], int x, int lb, int ub)
{
    if (lb <= ub)
    {
        // mid
        int mid = (lb + ub) / 2;
        // x == arr[mid]
        if (x == array[mid])
        {
            return mid; // centre;
        }

        // x>arr[mid]
        else if (x > array[mid])
        {
            binarySearch(array, x, mid + 1, ub); // right
        }

        // x<arr[mid]
        else
        {
            binarySearch(array, x, lb, mid - 1); // left
        }
    }
    else
    {
        return -1;
    }
}

int main()
{

    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int checkvalue;
    cout << "Please inter the value ";
    cin >> checkvalue;
    int indexValue = binarySearch(array, checkvalue, 0, size - 1);

    if (indexValue != -1)
    {
        cout << "Index No: " << indexValue << "   Position " << indexValue + 1 << " " << endl;
    }
    else
    {
        cout << "NOT FOUND" << endl;
    }

    return 0;
}
