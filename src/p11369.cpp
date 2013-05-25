#include <iostream>
#include <algorithm>

using namespace std;

bool comp(int x, int y){    return x > y;}

int main()
{
    int numCase, numItems, disc;
    int *arr;

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        disc = 0;
        cin >> numItems;
        arr = new int[numItems];
        for(int j = 0; j < numItems; j++)
            cin >> arr[j];

        sort(arr,arr+numItems,comp);

        for(int j = 2; j < numItems; j+=3)
            disc += arr[j];

        cout << disc << endl;
    }

    return 0;
}
