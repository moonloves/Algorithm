#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string a, b;

int cnt; // 최소 개수
int min_cnt = 50;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> a >> b;

	// 밀었을 때 가장 많이 겹치는 것 찾기

	for (int leng = 0; leng <= b.length()-a.length(); leng++)
	{
		cnt = 0;

		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] != b[i + leng]) cnt++;
		}

		min_cnt = min(min_cnt, cnt);

	}

	cout << min_cnt;

	return 0;
}