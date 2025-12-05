#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int t;
    while(n--){
        cin>>t;
        if(t>=1900){
            cout<<"Division 1"<<endl;
        }else if (1600<=t && t<=1899){
            cout<<"Division 2"<<endl;
        }else if(1400<=t&& t<=1599){
            cout<<"Division 3"<<endl;    
        }else{
            cout<<"Division 4"<<endl;
        }
    }
 
    return 0;
}