#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n>=m && abs(m-n)%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

// 88 81