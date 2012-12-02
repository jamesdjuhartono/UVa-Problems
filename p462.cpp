#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    int cards[52];
    int count_spade, count_hearts, count_clubs, count_diamond;
    int points, val, suit_val;
    bool spade_s, hearts_s, clubs_s, diamond_s, no_trump;
    string card;

    memset(cards,0,sizeof cards);
    count_spade = 0;    count_hearts = 0;   count_clubs = 0;    count_diamond = 0;
    points = 0;         val = 0;            suit_val = 0;
    spade_s = false;    hearts_s = false;   clubs_s = false;    diamond_s = false;  no_trump = false;

    while(cin >> card)
    {
        if(card.at(1) == 'S'){   suit_val = 0;  count_spade++;}
        else if(card.at(1) == 'H'){  suit_val = 12; count_hearts++;}
        else if(card.at(1) == 'D'){  suit_val = 25; count_diamond++;}
        else if(card.at(1) == 'C'){  suit_val = 38; count_clubs++;}

        if(card.at(0) == '2')   val = 1;
        else if(card.at(0) == '3')  val = 2;
        else if(card.at(0) == '4')  val = 3;
        else if(card.at(0) == '5')  val = 4;
        else if(card.at(0) == '6')  val = 5;
        else if(card.at(0) == '7')  val = 6;
        else if(card.at(0) == '8')  val = 7;
        else if(card.at(0) == '9')  val = 8;
        else if(card.at(0) == 'T')  val = 9;
        else if(card.at(0) == 'J'){  val = 10;  points += 1;}
        else if(card.at(0) == 'Q'){  val = 11;  points += 2;}
        else if(card.at(0) == 'K'){  val = 12;  points += 3;}
        else if(card.at(0) == 'A'){  val = 13;  points += 4;}

        cards[suit_val + val] = 1;
        if(val == 13 && suit_val == 0)  spade_s = true;
        else if(val == 13 && suit_val == 12)    hearts_s = true;
        else if(val == 13 && suit_val == 25)    diamond_s = true;
        else if(val == 13 && suit_val == 38)    clubs_s = true;

        if(count_spade + count_hearts + count_diamond + count_clubs == 13)
        {
            /*Subtract a point for any king of a suit in which the hand holds no other cards.*/
            if(cards[12] == 1 && count_spade == 1)  points--;
            if(cards[24] == 1 && count_hearts == 1)  points--;
            if(cards[37] == 1 && count_diamond == 1)  points--;
            if(cards[50] == 1 && count_clubs == 1)  points--;

            /*Subtract a point for any queen in a suit in which the hand holds only zero or one other cards.*/
            if(cards[11] == 1 && (count_spade == 1 || count_spade == 2))  points--;
            if(cards[23] == 1 && (count_hearts == 1 || count_hearts == 2))  points--;
            if(cards[36] == 1 && (count_diamond == 1 || count_diamond == 2))  points--;
            if(cards[49] == 1 && (count_clubs == 1 || count_clubs == 2))  points--;

            /*Subtract a point for any jack in a suit in which the hand holds only zero, one, or two other cards.*/
            if(cards[10] == 1 && (count_spade == 1 || count_spade == 2 || count_spade == 3))  points--;
            if(cards[22] == 1 && (count_hearts == 1 || count_hearts == 2 || count_hearts == 3))  points--;
            if(cards[35] == 1 && (count_diamond == 1 || count_diamond == 2 || count_diamond == 3))  points--;
            if(cards[48] == 1 && (count_clubs == 1 || count_clubs == 2 || count_clubs == 3))  points--;

            if(points >= 16)    no_trump = true;

            /*Add a point for each suit in which the hand contains exactly two cards.*/
            if(count_spade == 2)    points++;
            if(count_hearts == 2)   points++;
            if(count_diamond == 2)  points++;
            if(count_clubs == 2)    points++;

            /*Add two points for each suit in which the hand contains exactly one card.
              Add two points for each suit in which the hand contains no cards. */
            if(count_spade == 0 || count_spade == 1)    points += 2;
            if(count_hearts == 0 || count_hearts == 1)   points += 2;
            if(count_diamond == 0 || count_diamond == 1)  points += 2;
            if(count_clubs == 0 || count_clubs == 1)    points += 2;

            /*A suit is stopped if it contains an ace, or if it contains a king and at least one other card,
            or if it contains a queen and at least two other cards. */
            if(cards[12] == 1 && count_spade >= 2)  spade_s = true;
            if(cards[24] == 1 && count_hearts >= 2)  hearts_s = true;
            if(cards[37] == 1 && count_diamond >= 2)  diamond_s = true;
            if(cards[50] == 1 && count_clubs >= 2)  clubs_s = true;

            if(cards[11] == 1 && count_spade >= 3)  spade_s = true;
            if(cards[23] == 1 && count_hearts >= 3)  hearts_s = true;
            if(cards[36] == 1 && count_diamond >= 3)  diamond_s = true;
            if(cards[49] == 1 && count_clubs >= 3)  clubs_s = true;


            /*EVALUATION*/
            if(points < 14) cout << "PASS" << endl;
            else
            {
                if(no_trump && spade_s && hearts_s && clubs_s && diamond_s)
                    cout << "BID NO-TRUMP" << endl;
                else if(count_spade >= count_hearts && count_spade >= count_diamond && count_spade >= count_clubs)
                    cout << "BID S" << endl;
                else if(count_hearts >= count_clubs && count_hearts >= count_diamond && count_hearts >= count_clubs)
                    cout << "BID H" << endl;
                else if(count_diamond >= count_hearts && count_diamond >= count_spade && count_diamond >= count_clubs)
                    cout << "BID D" << endl;
                else if(count_clubs >= count_hearts && count_clubs >= count_diamond && count_clubs >= count_spade)
                    cout << "BID C" << endl;
            }

            /*RESET*/
            memset(cards,0,sizeof cards);
            count_spade = 0;    count_hearts = 0;   count_clubs = 0;    count_diamond = 0;
            points = 0;         val = 0;            suit_val = 0;
            spade_s = false;    hearts_s = false;   clubs_s = false;    diamond_s = false;  no_trump = false;
        }
    }

    return 0;
}
