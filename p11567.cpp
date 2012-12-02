#include <iostream>
#include <math.h>

using namespace std;

typedef long long ll;

ll choice(ll s)
{
    ll s1 = s + 1;
    ll s2 = s - 1;
    int c1 = 0, c2 = 0;

    if(s == 3)  return 2;
    if(s2 == 0) return s2;

    while(s1%2 == 0 && s1 != 0)
    {
        s1 /= 2;
        c1++;
    }
    while(s2%2 == 0 && s2 != 0)
    {
        s2 /= 2;
        c2++;
    }

    if(c1 > c2) return s + 1;
    return s - 1;
}

int main()
{
    ll s;
    int count;

    while(cin >> s)
    {
        count = 0;
        while(s != 0)
        {
            if(s%2 == 0)    s /= 2;
            else s = choice(s);
            count++;
        }
        cout << count << endl;
    }

    return 0;
}
