#include <iostream>
#include <math.h>

using namespace std;

typedef long long ll;

int main()
{
    int n;
    ll x, y;
    bool found;

    while(cin >> n && n)
    {
        found = false;
        if(n == 1)  cout << "No solution" << endl;
        else
        {
            for(int i = 2; i < sqrt(n) && !found; i++)
            {
                for(int j = 1; j <= i; j++)
                {
                    x = i*i*i;
                    y = j*j*j;
                    if(x - y == n)
                    {
                        found = true;
                        x = i;
                        y = j;
                        break;
                    }
                }
            }
            if(found)   cout << x << " " << y << endl;
            else        cout << "No solution" << endl;
        }
    }

    return 0;
}
