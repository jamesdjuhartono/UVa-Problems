#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int sumToOne(int n)
{
    int temp = 0;
    while(n > 0)
    {
        temp += n%10;
        n /= 10;
    }
    if(temp > 9)    sumToOne(temp);
    else            return temp;
}

int main()
{
    string name1, name2;
    int val1, val2;
    double p;
    char ch;

    while(getline(cin,name1))
    {
        val1 = 0;
        val2 = 0;
        getline(cin,name2);
        for(int i = 0; i < name1.length(); i++)
        {
            ch = name1.at(i);
            if(ch >= 65 && ch <= 90)        val1 += ch - 64;
            else if(ch >= 97 && ch <= 122)  val1 += ch - 96;
        }
        for(int i = 0; i < name2.length(); i++)
        {
            ch = name2.at(i);
            if(ch >= 65 && ch <= 90)        val2 += ch - 64;
            else if(ch >= 97 && ch <= 122)  val2 += ch - 96;
        }

        val1 = sumToOne(val1);
        val2 = sumToOne(val2);

        if(val1 > val2)
            p = (double)val2 / (double)val1;
        else
            p = (double)val1 / (double)val2;
        p *= 100;

        printf("%.2f",p);
        cout << " %" << endl;
    }
    return 0;
}
