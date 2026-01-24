#include <iostream>
#include <string>
using namespace std;

string SS(string a, string b) {
    string s1(stoi(b), a[0]);
    string s2(stoi(a), b[0]); 
    if(s1<=s2){
        return s1;
    }

    return s2;
}

int main() {
    string a, b;
    cin >> a >> b;
    cout<<SS(a,b);
    return 0;
}

 