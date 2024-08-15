#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<ll,ll>> v;
        for(int i=0;i<n;i++){
            ll x,y;
            cin>>x>>y;
            v.push_back({x,y});
        }
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll sum=(a-c)*(a-c)+(b-d)*(b-d);
        bool f=1;
        for(int i=0;i<n;i++){
            ll x=(v[i].first-c)*(v[i].first-c)+(v[i].second-d)*(v[i].second-d);
            if(x<=sum) f=0;
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
