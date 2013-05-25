#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int main()
{
    int numCase, s, inp, solved1, solved2, solved3;
    int friend1[10001], friend2[10001], friend3[10001];
    vector<int> unique1, unique2, unique3;

    cin >> numCase;

    for(int i = 1; i <= numCase; i++)
    {
        memset(friend1,0,sizeof friend1);
        memset(friend2,0,sizeof friend2);
        memset(friend3,0,sizeof friend3);

        cin >> s;
        for(int k = 0; k < s; k++){
            cin >> inp;
            friend1[inp] = 1;
        }
        cin >> s;
        for(int k = 0; k < s; k++){
            cin >> inp;
            friend2[inp] = 1;
        }
        cin >> s;
        for(int k = 0; k < s; k++){
            cin >> inp;
            friend3[inp] = 1;
        }

        unique1.clear();
        unique2.clear();
        unique3.clear();

        for(int k = 0; k < 10001; k++)
        {
            if(friend1[k] == 1 && friend2[k] == 0 && friend3[k] == 0)
                unique1.push_back(k);
            else if(friend2[k] == 1 && friend1[k] == 0 && friend3[k] == 0)
                unique2.push_back(k);
            else if(friend3[k] == 1 && friend2[k] == 0 && friend1[k] == 0)
                unique3.push_back(k);
        }

        solved1 = unique1.size();
        solved2 = unique2.size();
        solved3 = unique3.size();

        cout << "Case #" << i << ":" << endl;

        if(solved1 > solved2 && solved1 > solved3)
        {
            cout << "1 " << solved1;
            for(int k = 0; k < solved1; k++)
                cout << " " << unique1[k];

            cout << endl;
        }
        else if(solved2 > solved1 && solved2 > solved3)
        {
            cout << "2 " << solved2;
            for(int k = 0; k < solved2; k++)
                cout << " " << unique2[k];

            cout << endl;
        }
        else if(solved3 > solved2 && solved3 > solved1)
        {
            cout << "3 " << solved3;
            for(int k = 0; k < solved3; k++)
                cout << " " << unique3[k];

            cout << endl;
        }
        else if(solved1 == solved2 && solved1 == solved3)
        {
            cout << "1 " << solved1;
            for(int k = 0; k < solved1; k++)
                cout << " " << unique1[k];

            cout << endl;
            cout << "2 " << solved2;
            for(int k = 0; k < solved2; k++)
                cout << " " << unique2[k];

            cout << endl;
            cout << "3 " << solved3;
            for(int k = 0; k < solved3; k++)
                cout << " " << unique3[k];

            cout << endl;
        }
        else if(solved1 == solved2)
        {
            cout << "1 " << solved1;
            for(int k = 0; k < solved1; k++)
                cout << " " << unique1[k];

            cout << endl;
            cout << "2 " << solved2;
            for(int k = 0; k < solved2; k++)
                cout << " " << unique2[k];

            cout << endl;
        }
        else if(solved1 == solved3)
        {
            cout << "1 " << solved1;
            for(int k = 0; k < solved1; k++)
                cout << " " << unique1[k];

            cout << endl;
            cout << "3 " << solved3;
            for(int k = 0; k < solved3; k++)
                cout << " " << unique3[k];

            cout << endl;
        }
        else
        {
            cout << "2 " << solved2;
            for(int k = 0; k < solved2; k++)
                cout << " " << unique2[k];

            cout << endl;
            cout << "3 " << solved3;
            for(int k = 0; k < solved3; k++)
                cout << " " << unique3[k];

            cout << endl;
        }
    }

    return 0;
}
