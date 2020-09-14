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
		if (i % 2 == 0) { // i�� ¦��(0����)�� �� �Ͼ���� ¦��ĭ
			for (int j = 0; j < 8; j += 2)
			{
				if (chess[i][j] == 'F') ans++;
			}
		}
		
		// i�� Ȧ�� �� �� �Ͼ���� Ȧ��ĭ
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