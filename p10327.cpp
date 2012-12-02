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
    int size;
    int* arr;

    while(cin >> size)
    {
        arr = new int[size];
        for(int j = 0; j < size; j++)
            cin >> arr[j];

        cout << "Minimum exchange operations : " << count_swap_sort(arr,size) << endl;
    }

    return 0;
}
