#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

    int mx , mn;
    int n, a;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
				if (i == 0){
					mx = a;
					mn = a;
				}
				else{
					if (a > mx)
						mx = a;
	        if (a < mn)
						mn = a;
				}
    }
    cout << mn << endl;
    cout << mx << endl;

    return 0;
}
