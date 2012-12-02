#include <stdio.h>
#include <iostream>
using namespace std;

int count(int, int);

int main()
{
	int numCase, init, n, k, res;

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        cin >> init >> n >> k;
        res = count(n+init,k);

        cout << res << endl;
    }
	return 0;
}

int count(int n,int k)
{
	int total,_new,remainder;

	total = 0;

	while(n >= k)
	{
		_new = n/k;
		total = total + _new;
		remainder = n%k;

		n = _new + remainder;
	}
    return total;
}
