#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numCase, output;
    string input;
    char ch, dummy;

    scanf("%d",&numCase);
    gets(&dummy);

    for(int i = 0; i < numCase; i++)
    {
        output = 0;
        getline(cin,input);
        for(int j = 0; j < input.length(); j++)
        {
            ch = input.at(j);
            if(ch == 'a' || ch == 'd' || ch == 'g' || ch == 'j' || ch == 'm' || ch == 'p' || ch == 't' || ch == 'w' || ch == ' ')
                output += 1;
            else if(ch == 'b' || ch == 'e' || ch == 'h' || ch == 'k' || ch == 'n' || ch == 'q' || ch == 'u' || ch == 'x')
                output += 2;
            else if(ch == 'c' || ch == 'f' || ch == 'i' || ch == 'l' || ch == 'o' || ch == 'r' || ch == 'v' || ch == 'y')
                output += 3;
            else if(ch == 's' || ch == 'z')
                output += 4;
        }

        printf("Case #%d: %d\n",(i+1),output);
    }

    return 0;
}
