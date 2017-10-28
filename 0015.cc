#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

    int a[3];
		for(int i=0;i<3;i++){
			cin >> a[i];
			if( i == 2){
				a[0] = a[1] - a[0];
				a[2] = a[2] - a[1];
			}
		}
		cout << max(a[0],a[2])-1 << endl;

    return 0;
}
