#include <iostream>
using namespace std;

int year;

bool leap(int year) {
	if ((year % 4 == 0) && (year % 100 != 0)) {
		// 4�� ����̸鼭 100�� ����� �ƴ� ��
		return true;
	}
	else if (year % 400 == 0) {
		// 400�� ����� ��
		return true;
	}
	return false;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> year;

	if (leap(year)) {
		cout << 1;
	}
	else {
		cout << 0;
	}

	return 0;
}