#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int size, max;
    int arr[10001];
    int dp[10001];

    while(cin >> size)
    {
        if(size == 0)   break;

        for(int i = 0; i < size; i++)
            cin >> arr[i];

        dp[0] = arr[0];

        for(int i = 1; i < size; i++)
        {
            if(dp[i-1] + arr[i] > arr[i])
                dp[i] = dp[i-1] + arr[i];
            else
                dp[i] = arr[i];
        }

        max = 0;
        for(int i = 0; i < size; i++)
            if(dp[i] > max) max = dp[i];

        if(max == 0)    cout << "Losing streak." << endl;
        else            cout << "The maximum winning streak is " << max << "." << endl;
    }

    return 0;
}
