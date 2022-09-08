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

    //  step 1 : finding max
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i]; //9
        }
    }

    //step 2 : initialized of count array
    int count[max + 1]; //10
    for (int i = 0; i <= max; i++)
    { // 0 to 10
        count[i] = 0;
    }

    //step 3 : frequency calculation
    for (int i = 0; i < size; i++)
    { // 0 to 8
        count[array[i]]++;
    }

    //step 4: cumulative sum
    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }

    //step 5 //final array --? backward traversal of basic array
    int final[size];
    for (int i = size - 1; i >= 0; i--)
    {
        count[array[i]]--;
        int k = count[array[i]];
        final[k] = array[i];
    }

    cout << "After Sort: ";
    printArray(array, size);
    cout << endl;
}