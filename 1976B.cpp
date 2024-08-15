#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v1(n);
        vector<ll> v2(n+1);
        for(int i=0;i<n;i++){
            cin>>v1[i];
        }
        for(int i=0;i<n+1;i++){
            cin>>v2[i];
        }
        ll d1=0;
        ll d2=INT_MAX;
        for(int i=0;i<n;i++){
            d1+=abs(v1[i]-v2[i]);
            d2=min(d2,abs(v1[i]-v2[n]));
            d2=min(d2,abs(v2[i]-v2[n]));
            if(min(v1[i],v2[i])<=v2[n] && v2[n]<=max(v1[i],v2[i])){
                d2=0;
            }
        }
        cout<<d1+d2+1<<endl;
    }
}