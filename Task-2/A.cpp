#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool seen[26] = {false};   
        int balloons = 0;

        for (char c : s) {
            balloons += 1; 

            int i = c - 'A';
            if (!seen[i]) {
                balloons += 1;  
                seen[i] = true;
            }
        }

        cout << balloons << endl;
    }

    return 0;
}
