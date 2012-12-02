#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

string checkPerfect(int n)
{
    int sum = 0;
    for(int i = 1; i < n; i++)
        if(n%i == 0)
            sum += i;

    if(sum == n)
        return "PERFECT";
    else if(sum < n)
        return "DEFICIENT";
    else
        return "ABUNDANT";
}

int main()
{
    int x;

    cin >> x;
    cout << "PERFECTION OUTPUT" << endl;
    while(x != 0)
    {
        printf("%*d  ",5,x);
        cout << checkPerfect(x) << endl;
        cin >> x;
    }
    cout << "END OF OUTPUT" << endl;
    return 0;
}
