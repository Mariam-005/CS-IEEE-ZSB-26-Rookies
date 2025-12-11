#include <iostream>
#include <string>
using namespace std;

int main() {
    int m;
    cin >> m;

    while (m--) {
        int n;
        cin >> n;

        string s, t;
        cin >> s >> t;

        int c1[26] = {0};
        int c2[26] = {0};

        for (char c : s) {
            c1[c - 'a']++;
        }

        for (char c : t) {
            c2[c - 'a']++;
        }
        bool flag = true;
        for (int i = 0; i < 26; i++) {
            if (c1[i] != c2[i]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
