#include <bits/stdc++.h>
using namespace std;

int main() {
    long long X;
    cin >> X;

    for (long long i = sqrt(X); i >= 1; i--) {
        if (X % i == 0) {
            long long b = X / i;
            if (  gcd(i, b) == 1) {
                cout << i << " " << b << "\n";
                return 0;
            }
        }
    }
}
