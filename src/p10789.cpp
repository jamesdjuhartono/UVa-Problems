#include <iostream>
#include <string>
#include <string.h>

using namespace std;

bool prime[1000000];

void fill_prime()
{
    for(int i = 0; i < 1000000; i++)
        prime[i] = true;

    prime[0] = false;   prime[1] = false;
    for(int i = 2; i < 1000000; i++)
    {
        if(prime[i])
        {
            for(int j = 2*i; j < 1000000; j += i)
                prime[j] = false;
        }
    }
}

int main()
{
    int numCase;
    int freq[63];
    string input, output;
    char ch;

    fill_prime();

    cin >> numCase;
    getline(cin,input);

    for(int i = 0; i < numCase; i++)
    {
        getline(cin,input);
        memset(freq,0,sizeof freq);
        for(int j = 0; j < input.length(); j++)
        {
            ch = input.at(j);
            if((int)ch >= 48 && ch <= 57)
                freq[(int)ch-48]++;
            else if((int)ch >= 65 && ch <= 90)
                freq[(int)ch - 55]++;
            else
                freq[(int)ch - 61]++;
        }
        output = "";
        for(int j = 0; j < 63; j++)
        {
            if(prime[freq[j]])
            {
                if(j >= 0 && j <= 9)
                    output += (char)(j+48);
                else if(j >= 10 && j <= 35)
                    output += (char)(j+55);
                else
                    output += (char)(j+61);
            }
        }
        if(output == "")    output = "empty";
        cout << "Case " << (i+1) << ": " << output << endl;
    }

    return 0;
}
