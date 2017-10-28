#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

    int a[10];
    int sum = 0;

    for (int i = 0; i < 9; i++) {
        cin >> a[i];

        sum += a[i];
    }

    sum -= 100;

    int tmp;
    bool val;

    for (int i = 0; i < 9; i++) {
        tmp = sum - a[i];
        val = false;

        for (int j = i; j < 9 && !val; j++) {
            if ((i != j) && (tmp == a[j])) val = true, tmp = j;
        }

        if (val) {
            a[i] = 0;
            a[tmp] = 0;

            break;
        }
    }

    for (int i = 0; i < 9; i++)
        if (a[i] != 0) cout << a[i] << endl;

    return 0;
}
