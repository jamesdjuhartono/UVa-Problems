#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int numCase;
    double dummy;
    string input, output;

    scanf("%d\n",&numCase);

    for(int i = 0; i < numCase; i++)
    {
        output = "";
        getline(cin,input);
        dummy = (int)sqrt(input.length());

        if(pow(dummy,2) == input.length())
        {
            for(int j = 0; j < dummy; j++)
            {
                for(int k = 0; k < dummy; k++)
                    output += input.at(j + k*dummy);
            }
            cout << output << endl;
        }
        else
            cout << "INVALID" << endl;
    }

    return 0;
}
