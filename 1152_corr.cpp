#include <iostream>
#include <string>
using namespace std;

string str;
int cnt;

// 공백을 포함한 문자열 받기 -> getline(cin, str)

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	getline(cin, str);

	if (str.empty()) {
		cout << 0;
	}

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ') { // 공백일 경우
			cnt++;
		}
	}
	
	// 예외
	if (str[0] == ' ') cnt--;
	if (str[str.length() - 1] == ' ') cnt--;

	cout << cnt + 1; // 문자 수 = 공백+1
	return 0;
}