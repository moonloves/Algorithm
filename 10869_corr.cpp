#include <iostream>
using namespace std;

int a, b;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> a >> b;

	cout << a + b << "\n" << a - b << "\n"
		<< a * b << "\n" << a / b << "\n" << a % b;


	return 0;
}