#include <bits/stdc++.h>
using namespace std;
void o_or_e(long long n){
     cout<<n<<" ";
    if (n==1)return ;
   
    if (n%2==0)return o_or_e(n/2); 
    if (n%2!=0)return o_or_e(n*3 +1);
}
int main()
{ 
    long long n;
    cin>>n;
    o_or_e(n);
  

    return 0;
}