#include <iostream>
#include <string>

using namespace std;

int main()
{
    int round, count_wrong, count_right;
    string word, guess;
    char ch;
    bool found;
    bool checked[26];

    cin >> round;

    while(round >= 0)
    {
        count_wrong = 0;
        count_right = 0;
        cin >> word >> guess;

        for(int i = 0; i < 26; i++)
            checked[i] = false;

        for(int i = 0; i < guess.length(); i++)
        {
            ch = guess.at(i);
            found = false;
            if(!checked[(int)ch - 97])
            {
                for(int j = 0; j <  word.length(); j++)
                {
                    if(ch == word.at(j))
                    {
                        count_right++;
                        found = true;
                    }
                }
                checked[(int)ch - 97] = true;
            }
            else
                found = true;

            if(!found)
                count_wrong++;

            if(count_wrong >= 7 || count_right == word.length())
                break;
        }

        cout << "Round " << round << endl;
        if(count_right == word.length())
            cout << "You win." << endl;
        else if(count_wrong >= 7)
            cout << "You lose." << endl;
        else
            cout << "You chickened out." << endl;
        cin >> round;
    }

    return 0;
}
