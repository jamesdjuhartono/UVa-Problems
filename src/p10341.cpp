#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

#define EPS 0.00000001

int p,q,r,s,t,u;

double funct(double x)
{
    double res;

    res = p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*pow(x,2) + u;
    return res;
}

int main()
{
    double high, low, mid;

    while(cin >> p >> q >> r >> s >> t >> u)
    {
        if(funct(0)*funct(1) > 0)
            cout << "No solution" << endl;
        else
        {
            high = 1;
            low = 0;

            while(low + EPS < high)
            {
                mid = (low + high)/2;
                if(funct(low)*funct(mid) <= 0)
                    high = mid;
                else
                    low = mid;
            }

            printf("%.4lf\n",mid);
        }
    }
    return 0;
}
