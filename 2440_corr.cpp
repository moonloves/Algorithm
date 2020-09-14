#include <iostream>
using namespace std;

int n;

int main() {
	ios::sync_with_stdio(false);

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "*";
		}cout << endl;
	}

	return 0;
}