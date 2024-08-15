#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());

        ll ans=0,sum=0,idx=0;
        for(int i=0;i<n;i++){
            if(v[i]>m) break;
            sum+=v[i];
            while(v[i]-v[idx]>1 || sum>m) sum-=v[idx++];
            ans=max(ans,sum);
        }
        cout<<ans<<endl;
    }
}