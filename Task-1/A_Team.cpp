#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int out_counter = 0;

    for(int i = 0; i < n; i++) {
   int po, vo, to;
        cin >> po >> vo >> to;

        if(po + vo + to >= 2) {
            out_counter++;
        }
    }

    cout << out_counter <<endl;
    return 0;
}