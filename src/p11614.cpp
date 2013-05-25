#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
	int numCase, ans;
	double number, x;

	cin >> numCase;

	for(int i = 0 ; i < numCase; i++)
	{
		cin >> number;

		x = sqrt (1 + (4*2*number));
		x = x - 1;
		x = x / 2;
		ans = (int)x;

		cout << ans << endl;
	}

	return 0;
}
