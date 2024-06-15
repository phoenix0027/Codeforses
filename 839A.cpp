#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    vector<int> v(n);for(int i=0;i<n;i++) cin>>v[i];
    int sum=0;
    int c=0;
    int temp=0;
    for(int i=0;i<n;i++){
        v[i]+=temp;
        if(sum<k){
            if(v[i]>8){
                sum+=8;
                temp=v[i]-8;
            }
            else{
                sum+=v[i];
                temp=0;
            }
            c++;
        }
    }
    if(sum>=k) cout<<c<<endl;
    else cout<<-1<<endl;
}