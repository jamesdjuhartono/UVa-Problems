#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> myqueue;
    int size, temp;

    cin >> size;
    while(size != 0)
    {
        for(int i = 1; i <= size; i++)
            myqueue.push(i);
        if(size > 1)
            cout << "Discarded cards: ";
        else
            cout << "Discarded cards:";
        while(size > 1)
        {
            temp = myqueue.front();
            myqueue.pop();
            cout << temp;
            if(myqueue.size() != 1) cout << ", ";

            temp = myqueue.front();
            myqueue.pop();
            myqueue.push(temp);
            size--;
        }

        cout << endl << "Remaining card: " << myqueue.front() << endl;
        myqueue.pop();
        cin >> size;
    }

    return 0;
}
