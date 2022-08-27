#include <bits/stdc++.h>
using namespace std;

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
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

    cout << "Before Sort: ";
    printArray(array, size);
    cout << endl;

    // insertion sort implementation
    for (int i = 1; i < size; i++)
    {
        int key = array[i];
        int j = i - 1;
        while (array[j] > key && j >= 0)
        {
            array[j + 1] = array[j];
            printArray(array, size);
            cout << endl;
            j--;
        }
        array[j + 1] = key;
        printArray(array, size);
        cout << endl;
    }

    cout << "After Sort: ";
    printArray(array, size);
    cout << endl;

    return 0;
}