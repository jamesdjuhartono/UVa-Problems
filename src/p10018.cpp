#include <iostream>
#include <math.h>

using namespace std;

long long reverse (long long n)
{
    long long ans = 0;
    int digits[10];
    int count = 0;

    while(n > 0)
    {
        digits[count] = n%10;
        n /= 10;
        count++;
    }
    for(int i = 0; i < count; i++)
        ans += digits[i]*pow(10,count-i-1);

    return ans;
}

bool isPalindrome(long long n)
{
    int digits[10];
    int count = 0;

    while(n > 0)
    {
        digits[count] = n%10;
        n /= 10;
        count++;
    }

    for(int i = 0; i < count/2; i++)
        if(digits[i] != digits[count-i-1])
            return false;

    return true;
}

int main()
{
    int numCase, counter;
    long long input;

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        cin >> input;
        counter = 0;
        while(!isPalindrome(input))
        {
            input += reverse(input);
            counter++;
        }
        cout << counter << " " << input << endl;
    }

    return 0;
}
