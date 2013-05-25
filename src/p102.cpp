#include <iostream>
#include <string>

using namespace std;

#define B 0
#define G 1
#define C 2

int main()
{
    long long int bin1[3], bin2[3], bin3[3];
    long long int b1, b2, b3, g1, g2, g3, c1, c2, c3;
    long long int min;
    string output;

    while(cin >> bin1[B] >> bin1[G] >> bin1[C] >> bin2[B] >> bin2[G] >> bin2[C] >> bin3[B] >> bin3[G] >> bin3[C])
    {
        b1 = bin2[B] + bin3[B];
        b2 = bin1[B] + bin3[B];
        b3 = bin1[B] + bin2[B];
        g1 = bin2[G] + bin3[G];
        g2 = bin1[G] + bin3[G];
        g3 = bin1[G] + bin2[G];
        c1 = bin2[C] + bin3[C];
        c2 = bin1[C] + bin3[C];
        c3 = bin1[C] + bin2[C];

        min = b1 + c2 + g3;
        output = "BCG";
        if(b1 + g2 + c3 < min)
        {
            min = b1 + g2 + c3;
            output = "BGC";
        }
        if(c1 + b2 + g3 < min)
        {
            min = c1 + b2 + g3;
            output = "CBG";
        }
        if(c1 + g2 + b3 < min)
        {
            min = c1 + g2 + b3;
            output = "CGB";
        }
        if(g1 + b2 + c3 < min)
        {
            min = g1 + b2 + c3;
            output = "GBC";
        }
        if(g1 + c2 + b3 < min)
        {
            min = g1 + c2 + b3;
            output = "GCB";
        }
        cout << output << " " << min << endl;
    }

    return 0;
}
