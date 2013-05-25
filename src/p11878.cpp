#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a,b,c,r, count;
    char op;
    char equation[20];

    count = 0;

    while(gets(equation))
    {
        sscanf(equation,"%d%c%d=%d", &a,&op,&b,&r);
        //cout << a << " " << op << " " << b << " = " << r << endl;
        if(op == '+')   c = a + b;
        else            c = a - b;

        if(r == c)      count++;
    }
    cout << count << endl;

    return 0;
}
