#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

    int a, b;

    cin >> a;

    cin >> b;
    a += b;

    cin >> b;
    a += b;

    if (a >= 80 && a <= 100) cout << "A";
    else if (a >= 75 && a <= 79) cout << "B+";
    else if (a >= 70 && a <= 74) cout << "B";
    else if (a >= 65 && a <= 69) cout << "C+";
    else if (a >= 60 && a <= 64) cout << "C";
    else if (a >= 55 && a <= 59) cout << "D+";
    else if (a >= 50 && a <= 54) cout << "D";
    else cout << "F";

    cout << endl;

    return 0;
}
