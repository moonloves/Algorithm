#include <iostream>
#include <string>
using namespace std;

string str;
int cnt;

// ������ ������ ���ڿ� �ޱ� -> getline(cin, str)

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	getline(cin, str);

	if (str.empty()) {
		cout << 0;
	}

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ') { // ������ ���
			cnt++;
		}
	}
	
	// ����
	if (str[0] == ' ') cnt--;
	if (str[str.length() - 1] == ' ') cnt--;

	cout << cnt + 1; // ���� �� = ����+1
	return 0;
}