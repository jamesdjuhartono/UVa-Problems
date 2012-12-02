#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

bool comp(char a, char b){ return (int)a < (int)b;}

int main()
{
    int numCase;
    char input[100];

    scanf("%d",&numCase);
    for(int i = 0; i < numCase; i++)
    {
        scanf("%s",input);
        sort(input,input+strlen(input),comp);

        cout << input << endl;
        while(next_permutation(input,input+strlen(input)))
            cout << input << endl;

        cout << endl;
    }

    return 0;
}
