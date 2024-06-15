#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int m=0,idx=0;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            if(a<11 && b>m){
                idx=i+1;
                m=b;
            }
        }
        cout<<idx<<endl;
    }
}