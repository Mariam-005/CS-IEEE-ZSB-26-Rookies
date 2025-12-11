#include <iostream>
using namespace std;

int main() {
    int a, r, c;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> a;
            if (a == 1) {
                r = i;
                c = j;
            }
        }
    }
    cout << abs(r - 3) + abs(c - 3) << endl;
    return 0;
}
