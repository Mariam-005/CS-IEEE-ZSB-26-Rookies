#include <bits/stdc++.h>
using namespace std;
double atm(int x, double y){
    if (x%5==0&&(x+0.50)<=y){
        y-=(x+0.50);

    }else{
        return y;
    }
    return y;
}
int main()
{ 
    int D;
    double B;
    cin>>D>>B;
cout << fixed << setprecision(2)<<atm(D,B);
  

    return 0;
}