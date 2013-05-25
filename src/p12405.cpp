#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numCase, length, count, ans;
    string input;

    cin >> numCase;
    for(int i = 1; i <= numCase; i++)
    {
        cin >> length;
        getline(cin,input);
        getline(cin,input);

        count = 0;
        ans = 0;

        for(int j = 0; j < input.length(); j++)
        {
            if(input[j] == '.')
            {
                count++;
                if(count == 3){
                    ans++;
                    count = 0;
                }
            }
            else
            {
                if(count == 2){
                    ans++;
                    count = 0;
                }
                if(count == 1 && j+1 < input.length()){
                    ans++;
                    count = 0;
                    j++;
                }
            }
        }

        if(count > 0)   ans++;
        cout << "Case " << i << ": " << ans << endl;
    }
    return 0;
}
