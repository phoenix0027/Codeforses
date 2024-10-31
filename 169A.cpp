#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,a,b;
    cin>>n>>a>>b;
    vector<ll> v;
    ll c;
    for(int i=0;i<n;i++){
        cin>>c;
        v.push_back(c);
    }
    sort(v.begin(),v.end());
    cout<<v[b]-v[b-1];
}