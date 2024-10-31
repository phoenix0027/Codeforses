#define ll long long
#include<bits/stdc++.h>
using namespace std;

int main(){

    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    ll c=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            c+=((arr[i]-arr[i+1])/k)+1;
            arr[i+1]+=(((arr[i]-arr[i+1])/k)+1)*k;
        }
        else if(arr[i]==arr[i+1]){
            c+=1;
            arr[i+1]+=k;
        }
    }
    cout<<c;
}

