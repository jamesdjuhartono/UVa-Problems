#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int code_length;
    int code[1000], guess[1000];
    int correct_pos, correct_num, game;
    bool guess_checked[1000] = {false};
    bool code_checked[1000] = {false};
    bool go;

    game = 1;
    go = true;

    cin >> code_length;
    while(code_length != 0)
    {
        correct_pos = 0;
        correct_num = 0;
        go = true;

        for(int i = 0; i < code_length; i++)
            cin >> code[i];

        cout << "Game " << game << ":" << endl;
        game++;

        while(go)
        {
            correct_pos = 0;
            correct_num = 0;

            for(int i = 0; i < code_length; i++)
            {
                cin >> guess[i];
                if(guess[i] == code[i])
                {
                    correct_pos++;
                    code_checked[i] = true;
                    guess_checked[i] = true;
                }
            }

            if(guess[0] == 0)
                break;

            for(int i = 0; i < code_length; i++)
            {
                for(int j = 0; j < code_length; j++)
                {
                    if(!code_checked[j] && !guess_checked[i] && guess[i] == code[j] && i != j)
                    {
                        correct_num++;
                        code_checked[j] = true;
                        guess_checked[i] = true;
                        break;
                    }
                }
            }

            for(int i = 0; i < code_length; i++)
            {
                guess_checked[i] = false;
                code_checked[i] = false;
            }
            cout << "    (" << correct_pos << "," << correct_num << ")" << endl;
        }
        cin >> code_length;
    }
    return 0;
}
