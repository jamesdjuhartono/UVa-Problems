#include <iostream>
using namespace std;

int main()
{
    int term1, term2, final, att, test, test1, test2, test3, res;
    int numCase;

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        cin >> term1 >> term2 >> final >> att >> test1 >> test2 >> test3;
        if(test1 >= test3 && test2 >= test3)
            test = (test1 + test2)/2;
        else if(test1 >= test2 && test3 >= test2)
            test = (test1 + test3)/2;
        else if(test2 >= test1 && test3 >= test1)
            test = (test3 + test2)/2;
        res = term1 + term2 + final + att + test;
        cout << "Case " << (i+1) << ": ";
        if(res >= 90)
            cout << "A" << endl;
        else if(res >= 80)
            cout << "B" << endl;
        else if(res >= 70)
            cout << "C" << endl;
        else if(res >= 60)
            cout << "D" << endl;
        else
            cout << "F" << endl;
    }
    return 0;
}
