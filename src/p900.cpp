#include <iostream>

using namespace std;

int main()
{
    long long arr[51];
    int inp;

    arr[1] = 1;
    arr[2] = 2;
    for(int i = 3; i < 51; i++)
        arr[i] = arr[i-1] + arr[i-2];

    cin >> inp;
    while(inp != 0)
    {
        cout << arr[inp] << endl;
        cin >> inp;
    }
    return 0;
}
