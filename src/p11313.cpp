#include <stdio.h>
#include <iostream>
using namespace std;

int count(int, int);

int main()
{
	int numCase, n,k, res;

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        cin >> n >> k;
        res = count(n,k);

        if(res == 0)    cout << "cannot do this" << endl;
        else            cout << res << endl;
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

	if(n != 1)  return 0;
	else        return total;
}
