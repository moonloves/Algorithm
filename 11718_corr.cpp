#include <iostream>
#include <string>
using namespace std;

string s;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	
	while (true) {
		getline(cin, s);
		if (s == "") break;
		// �Ⱦ��� ����ʰ�(�迭 ���� �׻� null�� �ֱ� ����?)
		cout << s << "\n";
	}
	
	/*
	Ʋ���ڵ�
	while(cin >> s) {
		cout << s << "\n";
	}
	*/

	// -> �����޼����� '��� ������ �߸��Ǿ����ϴ�' ???

	return 0;
}