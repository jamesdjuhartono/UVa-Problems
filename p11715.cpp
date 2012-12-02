#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    double u, v, t, a, s;
    int numCase = 1, type;

    while(cin >> type)
    {
        if(type == 0)   break;
        cout << "Case " << numCase++ << ": ";

        if(type == 1)
        {
            cin >> u >> v >> t;
            a = (v - u)/t;
            s = u*t + 0.5*a*t*t;
            printf("%.3lf %.3lf\n",s,a);
        }
        else if(type == 2)
        {
            cin >> u >> v >> a;
            t = (v - u)/a;
            s = u*t + 0.5*a*t*t;
            printf("%.3lf %.3lf\n",s,t);
        }
        else if(type == 3)
        {
            cin >> u >> a >> s;
            v = sqrt (pow (u, 2) + 2 * a * s);
            t = (v - u)/a;
            printf("%.3lf %.3lf\n",v,t);
        }
        else
        {
            cin >> v >> a >> s;
            u = sqrt (pow (v, 2) - 2 * a * s);
            t = (v - u)/a;
            printf("%.3lf %.3lf\n",u,t);
        }
    }

    return 0;
}
