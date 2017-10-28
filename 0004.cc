#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

    char ch;
    int cap = 0, sma = 0;

    while (cin >> ch) {
        if (ch >= 'A' && ch <= 'Z') cap++;
        if (ch >= 'a' && ch <= 'z') sma++;
    }

    if (cap > 0 && sma == 0){
			cout << "All Capital Letter";
		}
    else if (cap == 0 && sma > 0){
			cout << "All Small Letter";
		}
    else {
			cout<< "Mix";
		}

    cout << endl;

    return 0;
}
