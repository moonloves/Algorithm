#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

long long r, c, n;
long long R, C;

// r,c,n이 각 10^6까지이므로, 최대 10^6*10^6이 된다.
// 즉 long long을 사용해야 한다.

// int 형은 10의 10승까지만.


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> r >> c >> n;

	if (r % n == 0) {
		R = r / n;
	}
	else {
		R = r / n + 1;
	}

	if (c % n == 0) {
		C = c / n;
	}
	else {
		C = c / n + 1;
	}

	cout << R * C;
	return 0;
}