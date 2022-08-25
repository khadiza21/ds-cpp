#include <bits/stdc++.h>
using namespace std;

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    int array[50];
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << "Given Array : ";
    printArray(array, size);

    int pos, value;
    cout << endl<< "Position of the Insertion: " << endl;
    cin >> pos;
    cout << "Value of the Insertion: " << endl;
    cin >> value;

    if (pos >= 0 && pos <= size)
    {
        // size - 1 ===> pos
        // 5,2,3,4,2 = array
        // pos = 2, value = 4
        for (int i = size - 1; i >= pos; i--)
        {
            array[i + 1] = array[i];
        }
        array[pos] = value;
    }
    else
    {
        cout << "Invalid Index";
    }

    cout << "Array After Insertion : ";
    printArray(array, size + 1);
}