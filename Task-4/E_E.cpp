#include <bits/stdc++.h>
using namespace std;
string s;
int n;
vector<string>final;
 
void P_of_S(int i){
    if (i==n){
        final.push_back(s);
        return;
    }
     P_of_S(i+1);

     for(int j=i+1;j<n;j++){
        swap(s[i],s[j]);
        P_of_S(i+1);
        swap(s[i],s[j]);
     }
}
int main()
{ 
    cin>>s;
    n=s.size();
    P_of_S(0);
    sort(final.begin(),final.end());
    final.erase(unique(final.begin(),final.end()),final.end());

    cout<<final.size()<<endl;
    for(int i=0; i<final.size(); i++){
        cout<<final[i]<<endl;
    }
   return 0;
}