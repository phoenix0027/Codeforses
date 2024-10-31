#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    vector<int> v(m); for(int i=0;i<m;i++) cin>>v[i];
    sort(v.begin(),v.end());
    int mini=INT_MAX;
    for(int i=0;i<=m-n;i++){
        int diff=v[i+n-1]-v[i];
        mini=min(mini,diff);
    }
    cout<<mini<<endl;
}