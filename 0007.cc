#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a,b;

    cin >> a;
    b = pow(a,2);
    cout << fixed << setprecision(6) << b*M_PI << endl;
    cout << fixed << setprecision(6) << b*2 << endl;
    return 0;
}
