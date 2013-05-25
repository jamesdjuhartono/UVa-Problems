#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    bool isStack, isQue, isPrioQue;
    stack<int> mystack;
    queue<int> myque;
    priority_queue<int> myprioque;
    int numCmd, cmd, element;

    while(cin >> numCmd)
    {
        while(!mystack.empty())     mystack.pop();
        while(!myque.empty())       myque.pop();
        while(!myprioque.empty())   myprioque.pop();

        isStack = true;
        isQue = true;
        isPrioQue = true;

        for(int i = 0; i < numCmd; i++)
        {
            cin >> cmd;
            cin >> element;
            if(cmd == 1)
            {
                mystack.push(element);
                myque.push(element);
                myprioque.push(element);
            }
            else
            {
                if(mystack.empty() || mystack.top() != element)    isStack = false;
                if(myque.empty() || myque.front() != element)      isQue = false;
                if(myprioque.empty() || myprioque.top() != element)  isPrioQue = false;

                if(!mystack.empty())     mystack.pop();
                if(!myque.empty())       myque.pop();
                if(!myprioque.empty())   myprioque.pop();
            }
        }

        if(!isStack && !isQue && !isPrioQue)        cout << "impossible" << endl;
        else if(isStack && !isQue && !isPrioQue)    cout << "stack" << endl;
        else if(isQue && !isStack && !isPrioQue)    cout << "queue" << endl;
        else if(isPrioQue && !isStack && !isQue)    cout << "priority queue" << endl;
        else                                        cout << "not sure" << endl;
    }

    return 0;
}
