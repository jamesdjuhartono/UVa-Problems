#include <iostream>

using namespace std;

int main()
{
    int curr, caseNo = 1;
    int create[12];
    int need[12];

    cin >> curr;
    while(curr >= 0)
    {
        for(int i = 0; i < 12; i++)
            cin >> create[i];
        for(int i = 0; i < 12; i++)
            cin >> need[i];

        cout << "Case " << caseNo++ << ":" << endl;
        for(int i = 0; i < 12; i++)
        {
            if(curr >= need[i])
            {
                cout << "No problem! :D" << endl;
                curr -= need[i];
            }
            else
                cout << "No problem. :(" << endl;

            curr += create[i];
        }
        cin >> curr;
    }

    return 0;
}
