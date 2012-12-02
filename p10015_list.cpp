#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>

#define MAX 32767
using namespace std;

bool prime[MAX];
int ith_prime[MAX];
int survivor[3502];

void fill_prime()
{
    int counter = 0;

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
    vector<int> persons;
    vector<int>::iterator it;
    int prime_counter, pos, size, idx;

    for(int z = 1; z < 3502; z++)
    {
        persons.clear();
        prime_counter = 1;

        for(int i = 1; i <= z; i++)
            persons.push_back(i);

        pos = 0;
        for(prime_counter = 0; prime_counter < z-1; prime_counter++)
        {
            if(ith_prime[prime_counter] > z-prime_counter) idx = ith_prime[prime_counter]%(z-prime_counter);
            else idx = ith_prime[prime_counter];

            size = persons.size();
            pos = (pos-1+idx)%size;
            persons.erase(persons.begin()+pos);
        }
        survivor[z] = persons.front();
    }
}

int main()
{
    vector<int> persons;
    vector<int>::iterator it;
    int input, prime_counter, pos, size, idx;

    fill_prime();
    fill_survivor();

    while(cin >> input)
    {
        if(input == 0)  break;
        cout << survivor[input] << endl;
    }

    return 0;
}
