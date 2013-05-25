#include <iostream>
#include <stdio.h>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack<char> mystack;
    string input;
    char ch, dummy;
    int numCase;
    bool balanced;

    cin >> numCase;
    gets(&dummy);

    for(int i = 0; i < numCase; i++)
    {
        balanced = true;
        getline(cin,input);
        for(int j = 0; j < input.length(); j++)
        {
            ch = input.at(j);
            if(ch == '(' || ch == '[')
                mystack.push(ch);
            else if(ch == ')')
            {
                if(!mystack.empty() && mystack.top() == '(')
                    mystack.pop();
                else
                {
                    balanced = false;
                    break;
                }
            }
            else if(ch == ']')
            {
                if(!mystack.empty() && mystack.top() == '[')
                    mystack.pop();
                else
                {
                    balanced = false;
                    break;
                }
            }
        }
        if(!balanced || !mystack.empty())
            cout << "No" << endl;
        else if(balanced && mystack.empty())
            cout << "Yes" << endl;

        while(!mystack.empty())  mystack.pop();
    }

    return 0;
}
