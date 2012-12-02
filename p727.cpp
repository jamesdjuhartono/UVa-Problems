#include <stdio.h>
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int precedence(char ch)
{
    if(ch == '+' || ch == '-')
        return 1;
    else
        return 2;
}

int main()
{
    int numCase;
    char ch[10];
    string postfix;
    stack<char> mystack;

    scanf("%d",&numCase);
    getchar();
    gets(ch);

    for(int i = 0; i < numCase; i++)
    {
        postfix = "";
        while(gets(ch) && ch[0])
        {
            if(ch[0] == '\0' || ch[0] == EOF)   break;
            if(ch[0] == '(')    mystack.push(ch[0]);
            else if(ch[0] == ')')
            {
                while(!mystack.empty() && mystack.top() != '('){
                    postfix += mystack.top();
                    mystack.pop();
                }
                mystack.pop();
            }
            else if(ch[0] == '+' || ch[0] == '-' || ch[0] == '*' || ch[0] == '/')
            {
                while(!mystack.empty() && mystack.top() != '(' && precedence(ch[0]) <= precedence(mystack.top())){
                    postfix += mystack.top();
                    mystack.pop();
                }
                mystack.push(ch[0]);
            }
            else
                postfix += ch[0];
        }

        while(!mystack.empty()){
            postfix += mystack.top();
            mystack.pop();
        }

        cout << postfix << endl;
        if(i != numCase - 1)    cout << endl;
    }

    return 0;
}
