#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    string input;
    int* arr;
    int counter;
    char ch;
    bool palindrome;

    getline(cin,input);
    while(input != "DONE")
    {
        palindrome = true;
        counter = 0;
        arr = new int[input.length()];

        for(int i = 0; i < input.length(); i++)
        {
            ch = input.at(i);
            if((int)ch >= 65 && (int)ch <= 90)
            {
                arr[counter] = (int)ch - 64;
                counter++;
            }
            else if((int)ch >= 97 && (int)ch <= 122)
            {
                arr[counter] = (int)ch - 96;
                counter++;
            }
        }

        for(int i = 0; i < counter/2; i++)
            if(arr[i] != arr[counter-i-1]){
                palindrome = false;
                break;
            }

        if(!palindrome) printf("Uh oh..\n");
        else            printf("You won't be eaten!\n");

        getline(cin,input);
    }
    return 0;
}
