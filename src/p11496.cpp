#include <iostream>

using namespace std;

int main()
{
    int size, count;
    int* arr;

    cin >> size;
    while(size != 0)
    {
        count = 0;
        arr = new int[size+2];
        for(int i = 0; i < size; i++)
            cin >> arr[i];

        arr[size]   = arr[0];
        arr[size+1] = arr[1];

        for(int i = 1; i <= size; i++)
            if((arr[i-1] > arr[i] && arr[i+1] > arr[i]) || (arr[i-1] < arr[i] && arr[i+1] < arr[i]))
                count++;

        cout << count << endl;
        cin >> size;
    }

    return 0;
}
