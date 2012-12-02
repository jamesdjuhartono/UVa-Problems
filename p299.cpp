#include <iostream>

using namespace std;

int count_swap_sort(int* a, int size)
{
    bool is_sorted;
    int count, temp;

    count = 0;

    for (int i = 1; i < size; i++)
    {
        is_sorted = true;
        for (int j = 0; j < size-i; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                is_sorted = false;
                count++;
            }
        }
    if (is_sorted) break;
    }
    return count;
}

int main()
{
    int numCase;
    int size;
    int* arr;

    cin >> numCase;

    for(int i = 0; i < numCase; i++)
    {
        cin >> size;
        arr = new int[size];
        for(int j = 0; j < size; j++)
            cin >> arr[j];

        cout << "Optimal train swapping takes " << count_swap_sort(arr,size) << " swaps." << endl;
    }

    return 0;
}
