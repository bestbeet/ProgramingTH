#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

    int a[3];
    string b;

    cin >> a[0] >> a[1] >> a[2];
    cin >> b;

    sort(a, a + 3);

    for (int i = 0; i < 3; i++)
        cout << a[b[i] % 'A'] << " ";

    cout << endl;

    return 0;
}
