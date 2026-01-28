#include <bits/stdc++.h>
using namespace std;
int R_fun(int n)
{
    if(n==0)return 1;
    return n*R_fun(n-1);
}
int main()
{ 
    int n;
    cin>>n;
    cout<<R_fun(n)<<endl;
  

    return 0;
}