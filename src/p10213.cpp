#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    unsigned long long int input, ans;
    int numCase;

    cin >> numCase;

    for(int i = 0; i < numCase; i++)
    {
        cin >> input;
        ans = pow(input,4) + 23*pow(input,2) + 24 - 6*pow(input,3) - 18*input;
        ans /= 24;
        cout << ans << endl;
    }
    return 0;
}
