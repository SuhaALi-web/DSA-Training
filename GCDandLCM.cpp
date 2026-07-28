#include <iostream>
using namespace std;

int main() {

    int a, b;

    cin >> a >> b;

    int x = a;
    int y = b;

    // GCD
    while (y != 0) {
        int rem = x % y;
        x = y;
        y = rem;
    }

    int gcd = x;

    // LCM
    int lcm = (a * b) / gcd;

    cout << "LCM = " << lcm << endl;
    cout << "GCD = " << gcd << endl;

    return 0;
}