#include <iostream>
using namespace std;

int n;
string str;
string result;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	cin >> str;
	result = str; // 한 번 수행
	
	for (int i = 1; i < n; i++)
	{
		cin >> str;
		// result = str;

		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] != result[j]) {
				result[j] = '?';
			}
		}
	}
	
	cout << result << "\n";

	return 0;
}