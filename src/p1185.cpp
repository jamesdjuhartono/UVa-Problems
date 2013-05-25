#include <iostream>
#include <math.h>
using namespace std;

int compute(int n)
{
    double sum = 0;

    for(int i = 1; i <= n; i++)
      sum += log10(i);

    return (int)floor(sum)+1;
}

int main()
{
    int numCase, x;

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        cin >> x;
        cout << compute(x) << endl;
    }
    return 0;
}
