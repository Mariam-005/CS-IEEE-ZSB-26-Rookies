#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[100];
        for(int i=0;i<n;i++) cin >> a[i];

        int re;
        if(a[0]==a[1] || a[0]==a[2]) re = a[0];
        else re = a[1];

        for(int i=0;i<n;i++){
            if(a[i]!=re){
                cout << i+1 << endl;
                break;
            }
        }
    }
      return 0;
}

