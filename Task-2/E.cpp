#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin.ignore();        
    getline(cin, s);    

    bool letters[26] = {false};

    for (char c : s) {
        if (c >= 'a' && c <= 'z') letters[c - 'a'] = true;
        else if (c >= 'A' && c <= 'Z') letters[c - 'A'] = true;
    }

    for (int i = 0; i < 26; i++) {
        if (!letters[i]) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
}
