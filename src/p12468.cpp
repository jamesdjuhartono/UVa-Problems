#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, ans;

    while(cin >> a >> b)
    {
        if(a == -1 && b == -1)  break;

        if(fabs(a-b) > 50)
            ans = 100 - fabs(a-b);
        else
            ans = fabs(a-b);

        cout << ans << endl;
    }

    return 0;
}
