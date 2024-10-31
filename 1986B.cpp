#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        ll n,m;cin>>n>>m;
        vector<vector<ll>> v(n,vector<ll>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ll num=0;
                if(i>0) num=max(num,v[i-1][j]);
                if(i<n-1) num=max(num,v[i+1][j]);
                if(j>0) num=max(num,v[i][j-1]);
                if(j<m-1) num=max(num,v[i][j+1]);
                if(num!=0 && num<v[i][j]) v[i][j]=num;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}