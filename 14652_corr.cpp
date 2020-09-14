#include <iostream>
using namespace std;

int N, M, K, n, m;

int main() {
	ios::sync_with_stdio(false);

	cin >> N >> M >> K;
	
	n = K / M;
	m = K % M;

	cout << n << " " << m;



	return 0;
}