#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int> m;
        int ans=0;
        sort(s.begin(),s.end());
        for(auto& ch:s){
            if((ch>='a' && ch<='z') && m[ch-32]>0){
                m[ch-32]--;
                ans++;
            }
            else{
                m[ch]++;
            }
        }
        for(auto& [i,j]:m){
            if(j>1 && k>0){
                if((j/2)<=k){
                    ans+=j/2;
                }
                else ans+=k;
                k-=j/2; 
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}