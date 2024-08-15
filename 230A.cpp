#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),[](const pair<int,int>& a, const pair<int,int>& b){
        if(a.first==b.first){
            return a.second>b.second;
        }
        return a.first<b.first;
    });
    int i=0;
    while(i<n){
        if(v[i].first<s){
            s+=v[i].second;
            i++;
        }
        else{
            break;
        }
    }
    if(i==n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}