#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    int n;
    cin>>n;
    
    while(n--){
     int count=0;   
     int num;
     cin>>num;
      for(int i=1;i<=sqrt(num);i++){
        if(num%i==0){
            if(i*i!=num){
                count+=2;
            }else
            count++;
        }

      }
      cout<<count<<endl;
    }

    return 0;
}