#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>

using namespace std;

int main()
{
    int numPlayers, k, numGames, player1, player2, draw;
    int win[105], lost[105];
    double avg;
    string hand1, hand2;
    bool first = true;

    while(cin >> numPlayers && numPlayers)
    {
        cin >> k;
        numGames = k*numPlayers*(numPlayers-1)/2;
        memset(win,0,sizeof win);
        memset(lost,0,sizeof lost);
        draw = 0;

        if(!first)  printf("\n");
        else        first = false;

        for(int i = 0; i < numGames; i++)
        {
            cin >> player1 >> hand1 >> player2 >> hand2;
            if((hand1 == "rock" && hand2 == "scissors") || (hand1 == "paper" && hand2 == "rock") || (hand1 == "scissors" && hand2 == "paper")){
                win[player1]++;
                lost[player2]++;
            }
            else if(hand1 == hand2)
                draw++;
            else{
                win[player2]++;
                lost[player1]++;
            }
        }

        for(int i = 1; i <= numPlayers; i++)
        {
            if(win[i] + lost[i] == 0)
                printf("-\n");
            else
                printf("%.3f\n",(double)win[i] / (double)(win[i]+lost[i]));
        }
    }

    return 0;
}
