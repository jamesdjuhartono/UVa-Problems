#include <stdio.h>
#include <iostream>
using namespace std;

int count(int, int);

int main(void)
{
	int n,k;

	while(cin >> n >> k)
        cout << count(n,k) << endl;

	return 0;
}

int count(int n,int k)
{
	int total,_new,remainder;

	total = n;

	while(n >= k)
	{
		_new = n/k;
		total = total + _new;
		remainder = n%k;

		n = _new + remainder;
	}

	return total;
}
