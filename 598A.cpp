#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long t=1;
        long long sum1=(n*(n+1))/2;
        long long sum2=0;
        while(t<=n){
            sum2-=t;
            t*=2;
        }
        cout<<sum1+(2*sum2)<<endl;
    }
}