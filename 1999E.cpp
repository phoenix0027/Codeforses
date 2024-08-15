#include<bits/stdc++.h>
using namespace std;

const int x=2e5+1;

int main(){
    vector<long long> prefix(x,0);
    long long a=3;
    long long y=1;
    for(int i=1;i<x;i++){
        if(i%a==0){
            y++;
            a*=3;
        }
        prefix[i]=prefix[i-1]+y;
    }
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        long long b=(prefix[r]-prefix[l-1])+(prefix[l]-prefix[l-1]);
        cout<<b<<endl;
    }
    return 0;
}