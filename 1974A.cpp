#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
        int two=(y+1)/2;
        x-=((two*15)-(4*y));
        x=(x>0?x:0);
        two+=(14+x)/15;
        cout<<two<<endl;
    }
    return 0;
}