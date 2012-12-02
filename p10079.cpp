#include <iostream>
using namespace std;

int main()
{
    long long int inp, ans;

    cin >> inp;
    while(inp >= 0)
    {
        if(inp == 0)
            ans = 1;
        else
            ans = (inp*(inp+1))/2 + 1;

        cout << ans << endl;
        cin >> inp;
    }

    return 0;
}
