#include <stdio.h>
#include <string.h>
#include <ctype.h>

using namespace std;

int main()
{
    char str[2048];
    char *p, letter;

    while(fgets(str, 2048, stdin) && str[0] != '*')
    {
        //printf("%s",str);
        p = strtok(str," ");
        letter = tolower(str[0]);

        while(p != NULL)
        {
            if(tolower(p[0]) != letter) break;
            p = strtok(NULL," ");
        }

        if(p == NULL)   printf("Y\n");
        else            printf("N\n");
    }

    return 0;
}
