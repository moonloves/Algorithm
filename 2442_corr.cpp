#include <iostream>
using namespace std;

int n;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) // 5
	{
		for (int j = n-1; j > i; j--) // 4 3 2 1 0
		{
			cout << " ";
		}

		for (int k = 0; k <= 2 * i; k++) // 1 3 5 7 9
		{
			cout << "*";
		}cout << endl;
	}

	return 0;
}