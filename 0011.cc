#include <iostream>
#include <set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

    set <int> a;
    int b;

    for (int i = 0; i < 10; i++) {
        cin >> b;

        a.insert(b % 42);
    }

    cout << a.size() << endl;

    return 0;
}
