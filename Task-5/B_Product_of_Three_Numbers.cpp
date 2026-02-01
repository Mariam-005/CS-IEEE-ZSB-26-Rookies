#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long a = 0, b = 0, c = 0;

        for (long long i = 2; i <=sqrt(n); i++) {
            if (n % i == 0) {
                a = i;
                n /= i;
                break;
            }
        }

        for (long long i = a + 1; i <=sqrt(n); i++) {
            if (n % i == 0) {
                b = i;
                c = n / i;
                break;
            }
        }

        if (a != 0 && b != 0 && c >= 2 && c != a && c != b) {
            cout << "YES"<<endl;
            cout << a << " " << b << " " << c << "\n";
        } else {
            cout << "NO"<<endl;
        }
    }

    return 0;
}
