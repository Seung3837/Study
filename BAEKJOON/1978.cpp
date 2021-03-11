#include <iostream>
using namespace std;

bool isPrime(int num) {
	if (num < 2) return false;

	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) return false;
	}

	return true;
}

int main() {
	int n, num, count = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;

		if (isPrime(num)) count++;
	}

	cout << count;

	return 0;
}