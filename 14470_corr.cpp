#include <iostream>
using namespace std;

int now, goal, c, d, e;
int ans;
int gap, defrost;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> now >> goal >> c >> d >> e;

	if (now < 0) { // ��Ⱑ ����ִٸ�

		// �����
		ans = (-1) * now * c;

		// �ص��Ѵ�
		ans += d;

		// �����
		ans += goal * e;

	}
	else if (now > 0) { // ��Ⱑ ������� �ʴٸ�
		gap = goal - now;
		//�����
		ans += gap * e;
	}

	cout << ans;

	return 0;
}