#include <stdio.h>
#include <iostream>
using namespace std;

int count(int, int);

int main()
{
	int n;

    while(cin >> n)
    {
        if(n == 0)  break;
        cout << count(n,3) << endl;
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
	if(n != 1)  return total+1;
    else        return total;
}
