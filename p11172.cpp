#include <iostream>
using namespace std;

int main()
{
    long long x, y;
    int numCase;

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        cin >> x >> y;
        if(x > y)
            cout << ">" << endl;
        else if(x < y)
            cout << "<" << endl;
        else
            cout << "=" << endl;
    }
    return 0;
}
