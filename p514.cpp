#include <iostream>
#include <stack>

using namespace std;

bool check(stack<int> roadB, int size)
{
    stack <int> roadA;
    stack <int> junction;
    int temp;

    for(int i = size; i > 0; i--)
        roadA.push(i);

    while(!roadB.empty())
    {
        if(junction.empty())
        {
            temp = roadA.top();
            junction.push(temp);
            roadA.pop();
        }

        if(junction.top() == roadB.top())
        {
            junction.pop();
            roadB.pop();
        }
        else if(!roadA.empty())
        {
            temp = roadA.top();
            junction.push(temp);
            roadA.pop();
        }

        if(roadA.empty() && !junction.empty() && junction.top() != roadB.top())
            return false;
    }

    return true;
}

int main()
{
    int size, end, reader, temp;
    stack <int> roadA, junction, roadB, stackBuffer;

    cin >> size;

    while(size != 0)
    {
        cin >> end;
        while(end != 0)
        {
            while(!roadB.empty())   roadB.pop();
            stackBuffer.push(end);
            for(int i = 1; i < size; i++)
            {
                cin >> reader;
                stackBuffer.push(reader);
            }
            for(int i = 0; i < size; i++)
            {
                temp = stackBuffer.top();
                roadB.push(temp);
                stackBuffer.pop();
            }

            if(check(roadB,size))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;

            cin >> end;
        }
        cout << endl;
        cin >> size;
    }

    return 0;
}
