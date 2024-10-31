#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    if(v[n-1]>25) cout<<v[n-1]-25<<endl;
    else cout<<0<<endl;
}