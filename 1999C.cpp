#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,s,m;
        cin>>n>>s>>m;

        bool t=false;
        long long a=0;
        long long x,y;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            if((x-a)>=s){
                t=true;
            }
            else{
                a=y;
            }
        }
        if((m-a)>=s){
            t=true;
        }
        if(t){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
}