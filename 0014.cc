#include <iostream>

using namespace std;

int gcd(int a, int b) {
    int c;

    while (a != 0) {
        c = a;
        a = b % a;
        b = c;
    }

    return b;
}

int main() {
	ios_base::sync_with_stdio(false);

    int a, b;

    cin >> a >> b;

    cout << gcd(a, b) << endl;

    return 0;
}
