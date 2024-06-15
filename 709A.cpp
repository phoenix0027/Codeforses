#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,b,d;
    cin>>n>>b>>d;
    long long arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    long long sum=0,c=0;
    for(int i=0;i<n;i++){
        if(arr[i]>b){
            continue;
        }
        sum+=arr[i];
        if(sum>d){
            c++;
            sum=0;
        }
    }
    cout<<c<<endl;
}