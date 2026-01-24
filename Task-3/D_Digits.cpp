#include <bits/stdc++.h>
using namespace std;
 int count(int n, int k){
    int c =0;
    if (n==0){
       c=1;
       return c;
    }
    while (n>0){
     n/=k;
     c++;
     }
     return c;
 }
int main()
{ 
    int N, K;
    cin >> N >> K;
    cout<<count(N,K);

    return 0;
}