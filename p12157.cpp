#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int numCase, numCalls, mile, juice, inp;

    cin >> numCase;

    for(int i = 1; i <= numCase; i++)
    {
        cin >> numCalls;
        mile = 0;
        juice = 0;
        for(int j = 0; j < numCalls; j++)
        {
            cin >> inp;
            mile += ((inp/30)+1) * 10;
            juice += ((inp/60)+1) * 15;
        }

        cout << "Case " << i << ": ";
        if(mile == juice)
            cout << "Mile Juice " << mile << endl;
        else if(mile < juice)
            cout << "Mile " << mile << endl;
        else
            cout << "Juice " << juice << endl;
    }

    return 0;
}
