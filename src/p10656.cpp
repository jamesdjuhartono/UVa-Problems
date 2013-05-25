#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int size, inp , sum, cnt;
    vector<int> v;
    vector<int>::iterator it;

    while(cin >> size)
    {
        if(size == 0)   break;

        sum = 0;
        cnt = 0;
        v.clear();
        for(int i = 0; i < size; i++)
        {
            cin >> inp;
            sum += inp;
            if(inp > 0){ v.push_back(inp);  cnt++;}
        }
        if(sum == 0)    cout << 0 << endl;
        else
        {
            for(int i = 0; i < cnt; i++)
            {
                cout << v[i];
                if(i != cnt - 1)   cout << " ";
                else                cout << endl;
            }
        }
    }

    return 0;
}
