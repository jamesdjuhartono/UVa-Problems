#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string, char> m;

void init_m() {
  m[".-"] = 'A';
  m[".---"] = 'J';
  m["..."] = 'S';
  m[".----"] = '1';
  m[".-.-.-"] = '.';
  m["---..."] = ':';
  m["-..."] = 'B';
  m["-.-"] = 'K';
  m["-"] = 'T';
  m["..---"] = '2';
  m["--..--"] = ',';
  m["-.-.-."] = ';';
  m["-.-."] = 'C';
  m[".-.."] = 'L';
  m["..-"] = 'U';
  m["...--"] = '3';
  m["..--.."] = '?';
  m["-...-"] = '=';
  m["-.."] = 'D';
  m["--"] = 'M';
  m["...-"] = 'V';
  m["....-"] = '4';
  m[".----."] = '\'';
  m[".-.-."] = '+';
  m["."] = 'E';
  m["-."] = 'N';
  m[".--"] = 'W';
  m["....."] = '5';
  m["-.-.--"] = '!';
  m["-....-"] = '-';
  m["..-."] = 'F';
  m["---"] = 'O';
  m["-..-"] = 'X';
  m["-...."] = '6';
  m["-..-."] = '/';
  m["..--.-"] = '_';
  m["--."] = 'G';
  m[".--."] = 'P';
  m["-.--"] = 'Y';
  m["--..."] = '7';
  m["-.--."] = '(';
  m[".-..-."] = '\"';
  m["...."] = 'H';
  m["--.-"] = 'Q';
  m["--.."] = 'Z';
  m["---.."] = '8';
  m["-.--.-"] = ')';
  m[".--.-."] = '@';
  m[".."] = 'I';
  m[".-."] = 'R';
  m["-----"] = '0';
  m["----."] = '9';
  m[".-..."] = '&';
}

int main()
{
    init_m();
    int numCase;
    string input, output, temp;

    cin >> numCase;
    getline(cin,input);

    for(int k = 1; k <= numCase; k++)
    {
        getline(cin,input);
        output = "";
        temp = "";
        for(int i = 0; i < input.length(); i++)
        {
            if(input.at(i) == ' ')
            {
                if(i+1 < input.length() && input.at(i+1) == ' ')
                {
                    if(m.find(temp) != m.end())
                        output += m[temp];
                    output += " ";
                    i++;
                }
                else
                    output += m[temp];
                temp = "";
            }
            else
                temp += input.at(i);
        }
        if(m.find(temp) != m.end())
            output += m[temp];
        cout << "Message #" << k << endl;
        cout << output << endl;

        if(k != numCase)
            cout << endl;
    }
    return 0;
}
