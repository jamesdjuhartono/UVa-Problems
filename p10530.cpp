#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    int max, min, curr, ans;
    string resp;

    max = 11;
    min = 0;

    while(scanf("%d",&curr) != EOF && curr)
    {
        getline(cin,resp);
        if(resp == "too high" && curr < max)
            max = curr;
        else if(resp == "too low" && curr > min)
            min = curr;
        else if(resp == "right on")
        {
            ans = curr;
            if(max <= min || ans >= max || ans <= min)
                cout << "Stan is dishonest" << endl;
            else
                cout << "Stan may be honest" << endl;

            max = 11;
            min = 0;
        }
    }

    return 0;
}
