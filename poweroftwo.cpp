#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    // Check if n is positive
    if (n <= 0)
        return false;

    // Check if n has only one set bit
    return (n & (n - 1)) == 0;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (isPowerOfTwo(n))
        cout << n << " is a Power of Two." << endl;
    else
        cout << n << " is NOT a Power of Two." << endl;

    return 0;
}