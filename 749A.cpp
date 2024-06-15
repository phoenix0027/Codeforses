#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin>>n;
    ll a;
    if(n%2==0){
        a=n/2;
        cout<<a<<endl;
    }
    else{
        a=(n-3)/2;
        cout<<a+1<<endl;
        cout<<3<<" ";
    }
    for(int i=0;i<a;i++){
        cout<<2<<" ";
    }
}