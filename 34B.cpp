#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    ll m,n,sum=0;
    cin>>m>>n;
    ll v[m];
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    sort(v,v+m);

    for(int i=0;i<n;i++){
        if(v[i]<0){
            sum-=v[i];
        }
    }
    cout<<sum<<endl;
}