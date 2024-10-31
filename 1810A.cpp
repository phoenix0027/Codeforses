#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool t=false;
        for(int i=0;i<n;i++){
            if(arr[i]==(i+1)){
                t=true;
                break;
            }
        }
        if(t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}