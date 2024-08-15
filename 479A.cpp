#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int ans;
    int a1=(a*b)*c;
    int a2=(a+b)*c;
    int a3=a*(b+c);
    int a4=(a*b)+c;
    int a5=a+(b*c);
    int a6=a+b+c;
    ans=max(a1,max(a2,max(a3,max(a4,a5))));
    cout<<max(ans,a6)<<endl;
    return 0;
}