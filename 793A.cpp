#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,k;
    cin>>n>>k;
    long long arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    long long sum=0;
    for(int i=1;i<n;i++){
        if((arr[i]-arr[0])%k==0){
            sum+=arr[i]-arr[0];
        }
        else{
            sum=-1;
            break;
        }
    }
    if(sum>0){
        cout<<sum/k<<endl;
    }
    else{
        cout<<sum<<endl;
    }
}