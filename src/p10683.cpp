#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string t;
    int HH, MM, SS, CC, g;
    while(cin >> t)
    {
        HH = (t[0] - 48)*10 + (t[1] - 48);
        MM = (t[2] - 48)*10 + (t[3] - 48);
        SS = (t[4] - 48)*10 + (t[5] - 48);
        CC = (t[6] - 48)*10 + (t[7] - 48);
        g = HH * 3600 + MM * 60 + SS;
        g *= 100;
        g += CC;
        g = (125 * g) / 108;
        printf("%07d\n", g);
    }
    return 0;
}
