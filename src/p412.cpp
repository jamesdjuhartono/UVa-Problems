#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int gcd(int a, int b)
{
	int rem;

	while (b>0) {
		rem = a % b;
		a = b;
		b = rem;
	}
	return a;
}

double pi(int arr[], int size)
{
	int i,j,count,pairs;

	count = 0;
	pairs = 0;

	for(i = 0; i < size; i++)
	{
		for(j = i+1; j < size; j++)
		{
			pairs++;
			if(gcd(arr[i],arr[j]) == 1)
				count++;
		}
	}
	if(count == 0)  return 0;
	return sqrt(6*(double)pairs/(double)count);
}

int main()
{
    int size,arr[50];
    double res;

	cin >> size;

	while(size != 0)
	{
        for(int i = 0; i < size; i++)
            cin >> arr[i];

        res = pi(arr,size);

        if(res == 0)
            cout << "No estimate for this data set." << endl;
        else
            printf("%.6lf\n",pi(arr,size));

        cin >> size;
	}
	return 0;
}
