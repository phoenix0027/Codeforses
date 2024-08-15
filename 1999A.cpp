#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans=0;
        for(auto& ch:s){
            ans+=(ch-'0');
        }
        cout<<ans<<endl;
    }
}