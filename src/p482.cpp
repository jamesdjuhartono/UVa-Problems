#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int index_arr[1000000];
    double out_arr[1000000];
    int numCase, counter;
    char input[1000000];
    char* pch;

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        counter = 0;
        getline(cin,input);
        pch = strtok(input," ");
        while(pch != NULL)
        {
            index_arr[counter] = pch;
            pch = strtok(input," ");
            counter++;
        }
        counter = 0;
        getline(cin,input);
        pch = strtok(input," ");
        while(pch != NULL)
        {
            out_arr[index_arr[counter]] = pch;
            pch = strtok(input," ");
            counter++;
        }

        for(int i = 0; i < counter; i++)
            cout << out_arr[i] << endl;

        cout << endl;
    }

    return 0;
}
