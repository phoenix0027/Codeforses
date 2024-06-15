#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        ll n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ll c=0;
        sort(arr,arr+n);

        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                c++;
            }
        }
        cout<<c<<endl;
    }
}x`