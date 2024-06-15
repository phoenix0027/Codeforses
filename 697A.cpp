#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t,s,x;
    cin>>t>>s>>x;
    long long a=t;
    long long i=1;
    if(x==a) cout<<"YES"<<endl;
    while(a<x){
        a=t+(i*s);
        if(a==x || x==(a+1)){
            cout<<"YES"<<endl;
            break;
        }
        i++;
    }
    if(x<a) cout<<"NO"<<endl;
}