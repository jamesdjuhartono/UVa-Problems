#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
    char input[100];

    while(scanf("%s",input))
    {
        if(input[0] == '#')
            break;

        if(next_permutation(input,input + strlen(input)))
            cout << input << endl;
        else
            cout << "No Successor" << endl;
    }
    return 0;
}
