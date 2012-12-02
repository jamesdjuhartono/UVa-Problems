#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char input[100], c;

    while(scanf("%s",input) != EOF)
    {
        c = getchar();

        for(int i = strlen(input) - 1; i >= 0; i--)
            cout << input[i];

        cout << c;
    }

    return 0;
}
