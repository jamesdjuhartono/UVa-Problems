#include <iostream>

using namespace std;

int main()
{
	int numSongs, songs[20], numTracks, max, best, sum, current;

	while(cin >> numSongs)
	{
		cin >> numTracks;

		for(int i = 0; i < numTracks; i++)
			cin >> songs[i];

		max = 1<<numTracks;
		sum = 0;
		best = 0;

		for(int i = 0; i < max; i++)
		{
			current = 0;
			for(int j = 0; (1<<j) <= i; j++)
				if( (1<<j) & i )
                    current += songs[j];
			if(current > sum && current <= numSongs)
			{
				best = i;
				sum = current;
			}
		}

		for(int i = 0; (1<<i) <= best; i++)
			if( (1<<i) & best )
				cout << songs[i] << " ";
        cout << "sum:" << sum << endl;
	}
	return 0;
}
