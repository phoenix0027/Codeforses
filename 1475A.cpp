#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if((n&(n-1))){
            cout<<"YES\n";
            continue;
        }
        cout<<"NO\n";
    }
    return 0;
}