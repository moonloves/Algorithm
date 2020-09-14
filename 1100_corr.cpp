#include <iostream>
using namespace std;

char chess[8][8];
int ans;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cin >> chess[i][j];
		}
	}

	for (int i = 0; i < 8; i++)
	{
		if (i % 2 == 0) { // i°¡ Â¦¼ö(0Æ÷ÇÔ)ÀÏ ¶§ ÇÏ¾á»öÀº Â¦¼öÄ­
			for (int j = 0; j < 8; j += 2)
			{
				if (chess[i][j] == 'F') ans++;
			}
		}
		
		// i°¡ È¦¼ö ÀÏ ¶§ ÇÏ¾á»öÀº È¦¼öÄ­
		else {
			for (int j = 1; j < 8; j += 2)
			{
				if (chess[i][j] == 'F') ans++;
			}
		}
		
	}
	cout << ans << "\n";

	return 0;
}