#include <iostream>
#include <algorithm>
using namespace std;

int team[4];
int ans;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i = 0; i < sizeof(team)/4; i++)
	{
		cin >> team[i];
	}

	sort(team, team + 4); // �������� ����

	ans = abs(team[3] + team[0] - team[1] - team[2]);
	// �й��Ģ ���� �ߴ��� ���� Ʋ���� Ʋ�Ƚ��ϴ�. �ߴ���
	// �����ؼ� ���ֱ�!

	cout << ans;

	return 0;
}