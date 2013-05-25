#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    int n, i, res = 0;
    string x;

    cin >> x;
    while(x != "0")
    {
        for(int i = 0; i < x.length(); i++)
        {
            if(x.at(i) == '1')  n = 1;
            else if(x.at(i) == '2') n = 2;
            else if(x.at(i) == '0') n = 0;

            res += n*(pow(2,x.length()-i) - 1);
        }
        cout << res << endl;
        cin >> x;
        res = 0;
    }
    return 0;
}
