#include <iostream>

using namespace std;

int main()
{
    int numCase, size, max_seniors, max_diff;
    int arr[100001];

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        cin >> size;
        for(int j = 0; j < size; j++)
            cin >> arr[j];

        max_seniors = arr[0];
        max_diff = -500000;

        for(int j = 1; j < size; j++)
        {
            if(max_seniors - arr[j] > max_diff)
                max_diff = max_seniors - arr[j];

            if(arr[j] > max_seniors)
                max_seniors = arr[j];
        }
        cout << max_diff << endl;
    }

    return 0;
}
