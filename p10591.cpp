#include <iostream>
#include <string.h>

using namespace std;

//int memo[1000000000];

int find(int n)
{
    int sum, save_n;
    bool found[1000];
    memset(found,false,sizeof found);

    //save_n = n;
    sum = 0;
    while(n > 0)
    {
        sum += (n%10)*(n%10);
        n /= 10;
    }
    n = sum;

    if(n == 1)  return 1;

    //if(memo[sum] == 0)  {memo[save_n] = 0; return;}
    //if(memo[sum] == 1)  {memo[save_n] = 1; return;}

    while(n > 1 && !found[n])
    {
        sum = 0;
        found[n] = true;
        while(n > 0)
        {
            sum += (n%10)*(n%10);
            n /= 10;
        }
        //if(memo[sum] == 0)  break;
        //else if(memo[sum] == 1)  {n = 1; break;}
        //else
        n = sum;
    }

    if(n == 1)  return 1;
    return 0;
    /*if(n == 1)
    {
        memo[save_n] = 1;
        for(int i = 0; i < 1000; i++){
            if(found[i])
                memo[i] = 1;
        }
    }
    else
    {
        memo[save_n] = 0;
        for(int i = 0; i < 1000; i++){
            if(found[i])
                memo[i] = 0;
        }
    }*/
}

int main()
{
    int numCase;
    long long n;

    //memset(memo,-1,sizeof memo);
    //memo[1] = 1;
    cin >> numCase;
    for(int i = 1; i <= numCase; i++)
    {
        cin >> n;
        cout << "Case #" << i << ": ";

        //if(memo[n] == -1)   find(n);

        if(find(n) == 1)
            cout << n << " is a Happy number." << endl;
        else
            cout << n << " is an Unhappy number." << endl;
    }

    return 0;
}
