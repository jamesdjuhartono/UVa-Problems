#include <iostream>
#include <algorithm>

using namespace std;

int m;

bool odd(int n)
{
    if(n < 0)   n *= -1;
    if(n%2 == 1)    return true;
    return false;
}

bool comp(int a, int b)
{
    if(a%m < b%m)   return true;
    else if(a%m == b%m && odd(a) && !odd(b)) return true;
    else if(a%m == b%m && odd(a) && odd(b) && a > b)    return true;
    else if(a%m == b%m && !odd(a) && !odd(b) && a < b)  return true;

    return false;
}

int main()
{
    int size;
    int arr[10001];

    while(cin >> size >> m)
    {
        if(size == 0 && m == 0)
        {
            cout << "0 0" << endl;
            break;
        }
        for(int i = 0; i < size; i++)
            cin >> arr[i];
        sort(arr, arr+size, comp);

        cout << size << " " << m << endl;
        for(int i = 0; i < size; i++)
            cout << arr[i] << endl;
    }

    return 0;
}
