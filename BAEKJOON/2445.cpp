#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		for (int j = i + 1; j < n; j++) {
			cout << "  ";
		}
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = n - 2; i >= 0; i--) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		for (int j = i + 1; j < n; j++) {
			cout << "  ";
		}
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}