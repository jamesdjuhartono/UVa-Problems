#include <iostream>
#include <stdio.h>
#include <set>
#include <vector>

using namespace std;

int main()
{
    set<double> H;
    H.insert(1);
    set<double>::iterator it = H.begin();

    while(H.size() < 7000)
    {
        H.insert (*it * 2);
        H.insert (*it * 3);
        H.insert (*it * 5);
        H.insert (*it * 7);
        *it++;
    }
    vector<double> memo (H.begin(), H.end());

    int input;
    while(cin >> input && input)
    {
        if(input%10 == 1 && input%100 != 11)   cout << "The " << input << "st humble number is ";
        else if(input%10 == 2 && input%100 != 12)  cout << "The " << input << "nd humble number is ";
        else if(input%10 == 3 && input%100 != 13)  cout << "The " << input << "rd humble number is ";
        else    cout << "The " << input << "th humble number is ";

        printf("%0.lf.\n",memo[input-1]);
    }

    return 0;
}
