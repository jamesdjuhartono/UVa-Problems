#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, q, caseNo = 1;
    int num;
    bool found;

    while(cin >> n >> q)
    {
        if(n == 0 && q == 0)    break;

        int a[10001];
        for(int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a+n);
        cout << "CASE# " << caseNo++ << ":" << endl;

        for(int i = 0; i < q; i++)
        {
            cin >> num;
            found = false;
            for(int j = 0; j < n; j++)
            {
                if(a[j] == num)
                {
                    cout << num << " found at " << (j+1) << endl;
                    found = true;
                    break;
                }
                else if(a[j] > num) break;
            }
            if(!found)  cout << num << " not found" << endl;
        }

    }

    return 0;
}
