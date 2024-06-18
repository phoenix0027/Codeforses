#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        long long sum=0;
        for(int i=0;i<n;i++){
            long long x;cin>>x;
            sum+=x;
        }
        long long sum1=sum;
        long long sq=sqrt(sum);
        if((sq*sq)==sum1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}