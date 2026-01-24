#include <iostream>

using namespace std;

void o_peaks(int r[], int n, int k) {
 
    int size = 2*n + 1;
    int i = size; 
    while (k > 0 && i <= size) {
        if (r[i] - 1 > r[i - 1] && r[i] - 1 > r[i + 1]) {
            r[i]--; 
            k--;  
        }
        i --; 
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    int r[210];
    int size = 2 * n + 1;

    for (int i = 1; i <= size; i++) {
        cin >> r[i];
    }
    o_peaks(r, n, k);

    for (int i = 1; i <= size; i++) {
        cout << r[i] << " ";

    }
    
    return 0;
}