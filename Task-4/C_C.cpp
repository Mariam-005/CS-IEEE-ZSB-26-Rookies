#include <bits/stdc++.h>
using namespace std;
int n;
vector<long long>weight;
long long minW(int i,long long sum1,long long sum2){
    if(i==n) return abs(sum1-sum2);

    long long c1=minW(i+1,sum1+weight[i],sum2);
    long long c2=minW(i+1,sum1,sum2+weight[i]);

    return min(c1,c2);
}
int main()
{   cin>>n;
    weight.resize(n);
    for(int i =0; i<n ;i++){
        cin>>weight[i] ;   
    }  
   cout<<minW(0,0,0)<<endl;
    return 0;
}