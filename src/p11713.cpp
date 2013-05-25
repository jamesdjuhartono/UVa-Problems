#include <iostream>
#include <string>

using namespace std;

bool isVowel(char ch)
{
    if(ch == 'a' || ch == 'i' || ch == 'u' || ch == 'e' || ch == 'o')   return true;
    return false;
}

int main()
{
    int numCase;
    string name1, name2;
    bool ok = true;

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        ok = true;
        cin >> name1;
        cin >> name2;
        if(name1.length() != name2.length())    ok = false;

        if(ok)
        {
            for(int j = 0; j < name1.length(); j++)
            {
                if(!isVowel(name1.at(j)) && name1.at(j) != name2.at(j)){
                    ok = false;
                    break;
                }
                else if(isVowel(name1.at(j)) && !isVowel(name2.at(j))){
                    ok = false;
                    break;
                }
            }
        }

        if(ok)  cout << "Yes" << endl;
        else    cout << "No" << endl;
    }

    return 0;
}
