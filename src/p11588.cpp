#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
    int numCase, max, freq_sum;
    int row, col, max_val, others_val;
    int freq[26];
    string input;

    cin >> numCase;
    for(int i = 1; i <= numCase; i++)
    {
        cin >> row >> col >> max_val >> others_val;
        memset(freq,0,sizeof freq);

        for(int j = 0; j < row; j++)
        {
            cin >> input;
            for(int k = 0; k < input.length(); k++)
                freq[(int)input.at(k) - 65]++;
        }

        max = 0;
        freq_sum = 0;
        for(int j = 0; j < 26; j++)
            if(freq[j] > max)
                max = freq[j];

        for(int j = 0; j < 26; j++)
            if(freq[j] == max)
                freq_sum += freq[j];

        cout << "Case " << i << ": " << max_val*freq_sum + ((row*col)-freq_sum)*others_val << endl;
    }
    return 0;
}
