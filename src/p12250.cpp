#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input, output;
    int counter = 1;

    cin >> input;
    while(input.compare("#") != 0)
    {
        if(input.compare("HELLO") == 0)
            output = "ENGLISH";
        else if(input.compare("HOLA") == 0)
            output = "SPANISH";
        else if(input.compare("HALLO") == 0)
            output = "GERMAN";
        else if(input.compare("BONJOUR") == 0)
            output = "FRENCH";
        else if(input.compare("CIAO") == 0)
            output = "ITALIAN";
        else if(input.compare("ZDRAVSTVUJTE") == 0)
            output = "RUSSIAN";
        else
            output = "UNKNOWN";

        cout << "Case " << counter << ": " << output << endl;
        counter++;
        cin >> input;
    }
    return 0;
}
