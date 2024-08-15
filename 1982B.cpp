#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long x,y,k;
        cin>>x>>y>>k;
        
        while(x!=1 && k>0){
            long long temp=y-(x%y);
            x+=min(k,temp);
            k-=min(k,temp);
            while(x%y==0){
                x=x/y;
            }
        }
        k=k%(y-x);
        cout<<x+k<<endl;
    }
    return 0;
}