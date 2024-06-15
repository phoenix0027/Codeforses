#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        vector<int> v(26,-1);
        bool t=true;
        for(int i=0;i<n;i++){
            if(v[s[i]-'A']==-1){
                v[s[i]-'A']=i;
            }
            else if(v[s[i]-'A']!=-1){
                if((i-v[s[i]-'A'])!=1){
                    t=false;
                    break;
                }
                else{
                    v[s[i]-'A']=i;
                }
            }
        }
        if(t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}