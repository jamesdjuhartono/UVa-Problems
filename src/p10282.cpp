#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <map>

using namespace std;

int main()
{
    string eng;
    string foreign;
    char a [100];
    map <string, string> dic;

    while (gets (a))
    {
        if ( strlen (a) == 0 )
            break;

        char *pch;
        char e [100];
        char f [100];

        pch = strtok (a, " ");
        strcpy (e, pch);
        pch = strtok (NULL, " ");
        strcpy (f, pch);

        eng = e;
        foreign = f;

        dic [f] = e;
    }

    while (gets (a))
    {
        string t = a;
        t = dic [t];

        if (t.length () == 0)
            cout << "eh" << endl;
        else
            cout << t << endl;
    }
    return 0;
}
