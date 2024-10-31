#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){

    ll n,a,b=0,c=0,d;
    cin>>n;
    c=n;
    vector<int> v;

    if(n<10){
        cout<<1<<endl;
    }
    else{
        while(n>0){
            a=n%10;
            n=n/10;
            v.push_back(a);
        }

        a=v[v.size()-1]+1;
        b=pow(10,v.size()-1);
        if(b%10!=0){
            b+=1;
        }
        cout<<(a*b)-c<<endl;
    }

}