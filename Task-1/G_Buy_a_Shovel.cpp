#include <bits/stdc++.h>
using namespace std;

int main()
 { 
  
   int k,r;
   cin>>k>>r;

for(int x=1;x<=10;x++){
       int t=x*k;
       int l_in_t=t%10;
      if(l_in_t==0 || l_in_t==r){
        cout<<x<<endl;
        break;

      }
    
    }

    
    return 0;
 }