#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int n, k;
    unsigned long long r;
    stringstream temp;

    while(cin >> n >> k)
    {
        r = 1;

        if(k > (n / 2))
            k = n - k;

        for(int i = 0; i < k; i++)
        {
            r = r * (n - i);
            r = r / (1 + i);
        }

        temp.str("");
        temp << r;
        cout << temp.str().length() << endl;
    }
    return 0;
}
