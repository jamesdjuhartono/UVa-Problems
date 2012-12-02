#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <ctype.h>

using namespace std;

bool comp(const char &a, const char &b)
{
    int delta = tolower(a) - tolower(b);
    return delta ? delta < 0 : a < b;
}

int main()
{
    int numCase;
    char input[1000];

    scanf("%d",&numCase);
    for(int i = 0; i < numCase; i++)
    {
        scanf("%s",input);
        sort(input,input+strlen(input),comp);

        cout << input << endl;
        while(next_permutation(input,input+strlen(input),comp))
            cout << input << endl;
    }

    return 0;
}
