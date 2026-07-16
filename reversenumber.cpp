#include <iostream>
using namespace std;

int reversenum(int n) {
    int rem;
    int revdigit = 0;

    while (n > 0) {
        rem = n % 10;
        revdigit = revdigit * 10 + rem;
        n /= 10;
    }

    return revdigit;
}

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Reversed number: " << reversenum(n);

    return 0;
}