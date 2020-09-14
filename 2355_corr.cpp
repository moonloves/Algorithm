#include <iostream>

using namespace std;

long long a, b, ans;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> a >> b;

	if (a >= b) {
		ans = (a * a - b * b + a + b) / 2;
	}
	else {
		ans = (b * b - a * a + b + a) / 2;
	}

	cout << ans;

	return 0;
}