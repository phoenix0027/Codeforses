#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        vector<long long> v;
        v.push_back(1);
        v.push_back(4);
        int j=2;
        for(int i=5;i<1e9;i++){
            if(v.size()==n){
                break;
            }
            long long x=v[j-1]+v[j-2];
            if((3*i)%x!=0){
                v.push_back(i);
                j++;
            }
            
        }
        for(int i:v) cout<<i<<" ";
        cout<<endl;
    }
}