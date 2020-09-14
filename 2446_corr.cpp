#include <iostream>
using namespace std;

int n;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++)
	{

		for (int k = 0; k < i; k++)
		{
			cout << " ";
		}
		
		for (int j = 2*i; j < 2*n-1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 0; i < n-1; i++)
	{
		for (int j = i; j < n-2; j++) // 4 3 2 1
		{
			cout << " ";
		}

		for (int k = 0; k < 2*i+3; k++) // 3 5 7 9
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}