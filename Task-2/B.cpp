#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool c1 = true;
    for (char ch : s) {
        if (ch < 'A' || ch > 'Z') {
            c1 = false;
            break;
        }
    }

    bool c2 = true;
    if (s[0] < 'a' || s[0] > 'z')
        c2 = false;
    else {
        for (int i = 1; i < s.size(); i++) {
            if (s[i] < 'A' || s[i] > 'Z') {
                c2 = false;
                break;
            }
        }
    }

    if (c1 || c2) {
        for (char &ch : s) {
            if (ch >= 'a' && ch <= 'z') ch = ch - 'a' + 'A';
            else ch = ch - 'A' + 'a';
        }
    }

    cout << s;
    return 0;
}
