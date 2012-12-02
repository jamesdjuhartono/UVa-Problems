#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, q, caseNo, sum_len, num, min_diff, diff, ans;
    int a[1001];
    int sum[1000 * 1000 + 10];

    caseNo = 1;
    while(cin >> n)
    {
        if(n == 0)   break;
        for(int i = 0; i < n; i++)
            cin >> a[i];

        sum_len = 0;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                sum[sum_len++] = a[i] + a[j];
            }
        }

        cin >> q;
        cout << "Case " << caseNo++ << ":" << endl;

        for(int i = 0; i < q; i++)
        {
            cin >> num;
            min_diff = 2147483647;
            for(int j = 0; j < sum_len; j++)
            {
                diff = fabs(num - sum[j]);
                if(diff < min_diff)
                {
                    min_diff = diff;
                    ans = sum[j];
                }
            }
            cout << "Closest sum to " << num << " is " << ans << "." << endl;
        }
    }

    return 0;
}
