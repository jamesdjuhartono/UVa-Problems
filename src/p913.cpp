#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
	long int input, output, temp;
	//long int array[100000];

	//array[1] = 1;

	//for(int i = 3; i < 100000; i += 2)
		//array[i] = i + array[i-2];
	

	while(cin >> input)
	{
		temp = 0;
		for(long int i = 1; i <= input; i+=2)
			temp += i;
		
		output = 3*(2*temp - 1) - 6;
		cout << output << endl;
	}
	return 0;
}
