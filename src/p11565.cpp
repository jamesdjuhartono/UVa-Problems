#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

int main()
{
    int numCase, x, y, z, A, B, C;
    set<int> values;
    bool found;

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        cin >> A >> B >> C;
        found = false;

        values.clear();
        values.insert(1);
        values.insert(-1);
        for(int j = 2; j <= B/2; j++)
        {
            if(B%j == 0)
            {
                values.insert(j);
                values.insert(B/j);
                values.insert(j * -1);
                values.insert(B/j * -1);
            }
        }

        vector<int> val (values.begin(), values.end());
        sort(val.begin(), val.end());

        for(int j = 0; j < values.size(); j++)
        {
            for(int k = 0; k < values.size(); k++)
            {
                x = val[j];
                y = val[k];
                z = A - x - y;
                if(values.find(z) != values.end() && x*y*z == B && x*x + y*y + z*z == C && x != y && y != z && z != x)
                {
                    found = true;
                    cout << x << " " << y << " " << z << endl;
                    j = k = values.size();
                }
            }
        }
        if(!found)  cout << "No solution." << endl;
    }
    return 0;
}
