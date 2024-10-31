#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b,c;
    cin>>a>>b>>c;
    string y = a+b;
    sort(y.begin(),y.end());
    sort(c.begin(),c.end());
    if(y==c) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}