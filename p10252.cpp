#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
    char a[1015], b[1015];

    while(gets(a))
    {
        gets(b);
        long freq[30];
        memset(freq, 0 , sizeof freq);

        long len = strlen(a);

        sort(a, a + len);

        for(int i = 0; i < len; i++)
            freq[(int)a[i] - 97]++;

        len = strlen(b);
        sort(b, b + len);

        for(int i = 0; i < len; i++)
        {
            if(freq[(int)b[i] - 97])
            {
                cout << b[i];
                freq[(int)b[i] - 97]--;
            }
        }
        cout << endl;
    }
    return 0;
}
