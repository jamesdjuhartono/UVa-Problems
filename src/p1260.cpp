#include <iostream>

using namespace std;

int main()
{
    int numCase, size, sum;
    int arr[1001];

    cin >> numCase;

    for(int i = 0; i < numCase; i++)
    {
        cin >> size;
        sum = 0;

        for(int j = 0; j < size; j++)
            cin >> arr[j];

        for(int j = 1; j < size; j++)
        {
            for(int k = j-1; k >= 0; k--)
                if(arr[k] <= arr[j])
                    sum++;
        }

        cout << sum << endl;
    }

    return 0;
}
