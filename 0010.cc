#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

    char ch;
    int ball = 1;

    while (cin >> ch) {
        if (ch == 'A') {
            if (ball == 1) ball = 2;
            else if (ball == 2) ball = 1;
        }

        if (ch == 'B') {
            if (ball == 2) ball = 3;
            else if (ball == 3) ball = 2;
        }

        if (ch == 'C') {
            if (ball == 1) ball = 3;
            else if (ball == 3) ball = 1;
        }
    }

    cout << ball << endl;

    return 0;
}
