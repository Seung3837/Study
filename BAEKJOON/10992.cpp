#include <iostream>
using namespace std;
int main() {
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            j == 0 || j == 2 * i || i == n - 1 ? cout << "*" : cout << " ";
        }
        cout << "\n";
    }

    return 0;
}