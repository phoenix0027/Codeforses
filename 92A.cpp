#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    ll n,k,sum;
    cin>>n>>k;

    sum=(n*(n+1))/2;
    if(k<=sum){
        for(int i=1;i<=n;i++){
            if(k>=0){
                k-=i;
            }
            else{
                k+=(i-1);
                break;
            }
        }
    }
    else if(k>sum){
        k=k%sum;
        for(int i=1;i<=n+1;i++){
            if(k>=0){
                k-=i;
            }
            else{
                k+=(i-1);
                break;
            }
        }
    }
    cout<<k<<endl; 
}