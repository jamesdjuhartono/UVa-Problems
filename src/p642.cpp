#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main ()
{
    string dictionary [100 + 5];
    string scramble;
    string end = "XXXXXX";
    bool _print;

    int dic_len = 0;

    while (cin >> dictionary [dic_len] && dictionary [dic_len] != end) dic_len++;

    sort (dictionary, dictionary + dic_len);

    while ( cin >> scramble && scramble != end )
    {
        sort (scramble.begin (), scramble.end ());
        _print = false;

        for ( int i = 0; i < dic_len; i++ )
        {
            string temp = dictionary [i];
            sort (temp.begin (), temp.end ());

            if (scramble == temp)
            {
                cout << dictionary [i] << endl;
                _print = true;
            }
        }

        if ( !_print) cout << "NOT A VALID WORD" << endl;
        cout << "******" << endl;
    }
	return 0;
}
