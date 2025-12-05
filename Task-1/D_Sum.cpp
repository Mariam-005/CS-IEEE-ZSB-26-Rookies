#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a ,b, c;
    while(n--){
        cin>>a>>b>>c;
        if(a+b==c || b+c==a || a+c==b){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
 
    return 0;
}
