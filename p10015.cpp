#include <iostream>
#include <stdio.h>
#include <string.h>

#define MAX 32767
using namespace std;

bool prime[MAX];
int ith_prime[MAX];
int survivor[3502];

void fill_prime()
{
    int counter = 1;

    for(int i = 0; i < MAX; i++)
        prime[i] = true;

    prime[0] = false;   prime[1] = false;
    for(int i = 2; i < MAX; i++)
    {
        if(prime[i])
        {
            for(int j = 2*i; j < MAX; j += i)
                prime[j] = false;
        }
    }

    for(int i = 0; i < MAX; i++)
    {
        if(prime[i])
        {
            ith_prime[counter] = i;
            counter++;
        }
    }
}

void fill_survivor()
{
    int input, person_left, counter, prime_counter, curr;
    bool arr[3502];

    for(int z = 1; z < 3502; z++)
    {
        memset(arr,false,sizeof arr);
        person_left = z;
        prime_counter = 1;
        curr = 1;

        while(person_left > 1)
        {
            counter = 0;
            while(counter < ith_prime[prime_counter])
            {
                if(curr > input)    curr = 1;
                if(!arr[curr])      counter++;
                curr++;
            }
            curr--;
            arr[curr] = true;
            prime_counter++;
            person_left--;
        }

        for(int i = 1; i <= input; i++)
            if(!arr[i]){ survivor[z] = i;  break;}
    }
}

int main()
{
    int input;
    fill_prime();
    fill_survivor();

    while(cin >> input)
    {
        if(input == 0)  break;
        cout << survivor[input] << endl;
    }

    return 0;
}
