#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k<=n){
            cout<<(k>0)<<endl;
            continue;
        }
        int ans=1,cur=n-1;
        k-=n;
        while(k>0){
            k-=cur;
            ans++;
            if(k<=0) break;
            k-=cur;
            ans++;
            cur--;
        }
        cout<<ans<<endl;
    }
    return 0;
}