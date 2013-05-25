#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int size, length, arr[55], memo[55][55];

int cut(int left,int right)
{
    if(left+1 == right) return 0;
    if (memo[left][right] != -1) return memo[left][right];

    int ans = 2000000000;
    for (int i = left + 1; i < right; i++)
        ans = min(ans, cut(left, i) + cut(i, right) + (arr[right] - arr[left]));

    return memo[left][right] = ans;
}

int main()
{
    while(cin >> length && length)
    {
        cin >> size;
        arr[0] = 0;
        for(int i = 1; i <= size; i++)
            cin >> arr[i];
        arr[size+1] = length;

        memset(memo,-1,sizeof memo);
        cout << "The minimum cutting is " << cut(0,size+1) << "." << endl;
    }
    return 0;
}
