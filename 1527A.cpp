#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=0;
        for(int i=0;i<32;i++){
            if(n&(1<<i)){
                x=i;
            }
        }
        long long ans=pow(2,x)-1;
        cout<<ans<<endl;
    }
    return 0;
}