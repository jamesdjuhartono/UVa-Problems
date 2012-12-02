#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int size, inp, sum, top1, top2;
    priority_queue<int , vector<int> , greater<int> > que;

    cin >> size;
    while(size != 0)
    {
        sum = 0;
        for(int i = 0; i < size; i++)
        {
            cin >> inp;
            que.push(inp);
        }
        while(que.size() != 1)
        {
            top1 = que.top();
            que.pop();
            top2 = que.top();

            sum += top1 + top2;
            que.pop();
            que.push(top1+top2);
        }
        que.pop();

        cout << sum << endl;
        cin >> size;
    }
    return 0;
}
