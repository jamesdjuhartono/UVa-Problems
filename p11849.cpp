#include <stdio.h>
#include <set>

using namespace std;

int main()
{
    set<int> cds;
    pair<set<int>::iterator,bool> ret;
    int jack, jill, count, inp;

    while(scanf("%d %d",&jack,&jill) != EOF && (jack || jill))
    {
        count = 0;
        cds.clear();

        for(int i = 0; i < jack; i++)
        {
            scanf("%d",&inp);
            cds.insert(inp);
        }
        for(int i = 0; i < jill; i++)
        {
            scanf("%d",&inp);
            ret = cds.insert(inp);
            if(ret.second == false)
                count++;
        }
        printf("%d\n",count);
    }

    return 0;
}
