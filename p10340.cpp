#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, t;
    int x, count;
    char ch;

    while(cin >> s >> t)
    {
        x = 0;
        count = 0;

        for(int i = 0; i < s.length(); i++)
        {
            ch = s.at(i);
            for(int j = x; j < t.length(); j++)
            {
                if(t.at(j) == ch){
                    x = j+1;
                    count++;
                    break;
                }
            }
        }
        if(count == s.length())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
