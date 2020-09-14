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
		// 안쓰면 출력초과(배열 끝에 항상 null이 있기 떄문?)
		cout << s << "\n";
	}
	
	/*
	틀린코드
	while(cin >> s) {
		cout << s << "\n";
	}
	*/

	// -> 에러메세지가 '출력 형식이 잘못되었습니다' ???

	return 0;
}