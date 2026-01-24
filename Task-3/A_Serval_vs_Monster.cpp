#include <bits/stdc++.h>
using namespace std;
 int numof(int x, int y){
     int n=0;
    while(x>0){
        x=x-y;
        n++;
    }
 return n;
 }
int main()
{ 
   int h,a;
   cin>>h>>a; 
   cout<<numof(h,a);

    return 0;
}