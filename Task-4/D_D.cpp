#include <bits/stdc++.h>
using namespace std;

string s1, s2;
int n, target;

int DD(int idx, int pos) {
    if(idx == n) return pos == target;
    if(s2[idx] == '+') return DD(idx + 1, pos + 1);
    if(s2[idx] == '-') return DD(idx + 1, pos - 1);
    return DD(idx + 1, pos + 1) + DD(idx + 1, pos - 1);
}

int main() {
    cin >> s1 >> s2;
    n = s1.size();

    target = 0;
    for(char c : s1) {
        if(c == '+') target += 1;
        else target -= 1;
    }

    int q = count(s2.begin(), s2.end(), '?');
    double prob = (double)DD(0, 0) / (1 << q);
    cout << fixed << setprecision(12) << prob << endl;
}
