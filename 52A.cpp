#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<ll> v;
    ll a=0,b=0,c=0,d;
    for(int i=0;i<n;i++){
        cin>>d;
        v.push_back(d);
    }
    for(int i:v){
        if(i==1) a++;
        else if(i==2) b++;
        else if(i==3) c++;
    }
    ll sum=a+b+c;
    ll maximum=max(a,max(b,c));
    cout<<sum-maximum<<endl;
}