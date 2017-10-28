#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n, m;

    cin >> n >> m;

    int a[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int tmp;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> tmp;

            cout << a[i][j] + tmp << " ";
        }

        cout << endl;
    }

    return 0;
}
