#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        vector<long long> v(n); for(int i=0;i<n;i++) cin>>v[i];
        long long avg=accumulate(v.begin(),v.end(),0)/n;
        long long c=0;
        bool t=true;
        for(int i=0;i<n;i++){
            if(v[i]>avg){
                c+=v[i]-avg;
            }
            else if(v[i]<avg){
                c-=avg-v[i];
            }
            if(c<0){
                t=false;
            }
        }
        if(t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}