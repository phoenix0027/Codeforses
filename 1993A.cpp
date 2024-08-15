#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int> m;
        for(auto& ch:s){
            m[ch]++;
        }
        int ans=0;
        for(auto& [i,j]:m){
            if(j>n && i!='?'){
                ans+=n;
            }
            else if(i!='?'){
                ans+=j;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}