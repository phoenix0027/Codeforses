#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(((n%2!=0 && k%2!=0) || (n%2==0 && k%2==0)) && n>=k){
            cout<<"YES"<<endl;
            for(int i=0;i<k-1;i++){
                cout<<1<<" ";
            }
            cout<<n-(k-1)<<endl;
            continue;
        }
        else if(n%2==0 && k%2!=0 && (n/2)>=k){
            cout<<"YES"<<endl;
            for(int i=0;i<k-1;i++){
                cout<<2<<" ";
            }
            cout<<n-((k-1)*2)<<endl;
            continue;
        }
        cout<<"NO"<<endl;
        continue;
    }
    return 0;
}