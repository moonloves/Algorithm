#include <iostream>
#include <string>
using namespace std;

int N, x;
string cmd;

int stack[100001];

int main() {
	int size = 0;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> cmd;

		if (cmd == "push") {
			cin >> x;
			stack[size] = x;
			size++;
		}
		else if (cmd == "pop") {
			if (size > 0) {
				cout << stack[size - 1] << "\n";
				stack[size - 1] = 0;
				size--;
			}
			else {
				cout << -1 << "\n";
			}
		}
		else if (cmd == "size") {
			cout << size << "\n";
		}
		else if (cmd == "empty") {
			if (size == 0) { // 스택이 비어있으면
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (cmd == "top") {
			if (size > 0) {
				cout << stack[size - 1] << "\n";
			}
			else {
				cout << -1 << "\n";
			}
		}
	}
	return 0;
}