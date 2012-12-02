#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

#define MAX 5000000

using namespace std;

bool desc_sort (int i,int j) { return (i > j); }

int main()
{
    int numCase, curr, inp;
    vector<int> arr;

    cin >> numCase;

    for(int z = 0; z < numCase; z++)
    {
        curr = 0;
        arr.clear();

        cin >> inp;
        while(inp != 0)
        {
            arr.push_back(inp);
            cin >> inp;
        }

        sort(arr.begin(),arr.end(),desc_sort);
        for(int i = 0; i < arr.size(); i++)
        {
            //cout << arr[i] << " ";
            if(curr < MAX)
                curr += 2*pow(arr[i],i+1);
        }

        if(curr > MAX)
            cout << "Too expensive" << endl;
        else
            cout << curr << endl;

    }

    return 0;
}
