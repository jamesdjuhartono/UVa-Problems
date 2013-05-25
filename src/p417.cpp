#include <iostream>
#include <string>
#include <map>
#include <queue>

using namespace std;

map<string, int> mapp;

void fill_map()
{
    queue<string> que;
    string str;
    char ch;
    int index = 1;

    for(int i = 1; i <= 26; i++)
    {
        ch = (char)(i+96);
        str = "";
        str += ch;
        que.push(str);
        mapp[str] = index++;
    }
    while(!que.empty())
    {
        str = que.front();
        que.pop();
        ch = str.at(str.length()-1);

        if(str.length() != 5 && ch != 'z')
        {
            for(char next = ++ch; next <= 'z'; que.push(str + next), next++)
                mapp[str+next] = index++;
        }
        //cout << index << " ";
    }
}

int main()
{
    string inp;
    fill_map();

    while(getline(cin,inp))
        cout << mapp[inp] << endl;

    return 0;
}
