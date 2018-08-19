#include <iostream>
#include <cmath>
using namespace std;

int n;

int main() {
	cin >> n;
	cout << (n*(n - 1)*(n - 2)*(n - 3)) / 24;
	return 0;
}