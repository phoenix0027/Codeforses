#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;cin>>n;
    vector<long long> v(n); for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(i==0){
            cout<<abs(v[0]-v[1])<<" "<<abs(v[n-1]-v[0])<<endl;
        }
        else if(i==n-1){
            cout<<abs(v[n-1]-v[n-2])<<" "<<abs(v[n-1]-v[0])<<endl;
        }
        else{
            long long m1=min(abs(v[i]-v[i-1]),abs(v[i]-v[i+1]));
            long long m2=max(abs(v[i]-v[0]),abs(v[i]-v[n-1]));
            cout<<m1<<" "<<m2<<endl;
        }
    }
}