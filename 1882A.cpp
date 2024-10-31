#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        ll n,c=0;
        cin>>n;
        ll a1[n];
        for(int i=0;i<n;i++) 
            cin>>a1[i];

        ll j=1;
        for(int i=0;i<n;i++){
            if(a1[i]==j){
                j+=1;
            }
            j++;
        }
        cout<<j-1<<endl;

    }
}