#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int alpha1[26], alpha2[26];
string a, b;
int same, ans;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> a >> b;

	for (int i = 0; i < a.length(); i++)
	{
		alpha1[a[i] - 'a']++;
	}
	for (int i = 0; i < b.length(); i++)
	{
		alpha2[b[i] - 'a']++;
	}

	
	for (int i = 0; i < 26; i++)
	{
		if ((alpha1[i]>0)&&(alpha2[i]>0)) {
			same += min(alpha1[i], alpha2[i]);
		}
	}

	same *= 2;

	int len = a.length() + b.length();
	// �� ���ڿ��� ���̰� ���ٴ� �̾߱� ������ ����

	ans = len - same;
	
	cout << ans;
	return 0;
}