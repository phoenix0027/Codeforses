#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        ll n,m;cin>>n>>m;
        string s,c;cin>>s;
        vector<int> v(m);for(int i=0;i<m;i++) cin>>v[i];
        cin>>c;
        set<int> ind(v.begin(),v.end());
        sort(c.begin(),c.end());
        int j=0;
        for(auto i:ind){
            s[i-1]=c[j];
            j++;
        }
        cout<<s<<endl;
    }
}