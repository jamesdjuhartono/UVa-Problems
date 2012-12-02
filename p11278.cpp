#include <iostream>
#include <string>

using namespace std;

int main()
{
    string normal_key = " `1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}ASDFGHJKL:\"ZXCVBNM<>?\\|";
    string dvorak =     " `123qjlmfp/[]456.orsuyb;=789aehtdck-0zx,inwvg'~!@#QJLMFP?{}$%^>ORSUYB:+&*(AEHTDCK_)ZX<INWVG\"\\|";
    string input, output;
    char ch;

    while(getline(cin,input))
    {
        output = "";
        for(int i = 0; i < input.length(); i++)
        {
            ch = input.at(i);
            for(int j = 0; j < normal_key.length(); j++)
                if(normal_key.at(j) == ch)
                {
                    output += dvorak[j];
                    break;
                }
        }
        cout << output << endl;
    }
    return 0;
}
