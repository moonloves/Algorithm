#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

long long r, c, n;
long long R, C;

// r,c,n�� �� 10^6�����̹Ƿ�, �ִ� 10^6*10^6�� �ȴ�.
// �� long long�� ����ؾ� �Ѵ�.

// int ���� 10�� 10�±�����.


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