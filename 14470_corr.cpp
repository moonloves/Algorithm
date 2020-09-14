#include <iostream>
using namespace std;

int now, goal, c, d, e;
int ans;
int gap, defrost;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> now >> goal >> c >> d >> e;

	if (now < 0) { // 고기가 얼어있다면

		// 데운다
		ans = (-1) * now * c;

		// 해동한다
		ans += d;

		// 데운다
		ans += goal * e;

	}
	else if (now > 0) { // 고기가 얼어있지 않다면
		gap = goal - now;
		//데운다
		ans += gap * e;
	}

	cout << ans;

	return 0;
}