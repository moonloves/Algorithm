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

	sort(team, team + 4); // 오름차순 정렬

	ans = abs(team[3] + team[0] - team[1] - team[2]);
	// 분배법칙 쓰게 했더니 연산 틀려서 틀렸습니다. 뜨더라
	// 전개해서 써주기!

	cout << ans;

	return 0;
}