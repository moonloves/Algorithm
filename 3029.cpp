#include <iostream>
#include <string>
using namespace std;

string now, throwing, hiding;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> now >> throwing;

	int nHour = stoi(now.substr(0,2));
	int nMin = stoi(now.substr(3, 2));
	int nSec = stoi(now.substr(6, 2));

	int tHour = stoi(now.substr(0, 2));
	int tMin = stoi(now.substr(3, 2));
	int tSec = stoi(now.substr(6, 2));



	return 0;
}