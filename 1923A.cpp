#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int one=0;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==1) one++;
        }
        if(one<2) cout<<0<<endl;
        else{
            int x1,x2;
            for(int i=0;i<n;i++){
                if(v[i]==1){
                    x1=i;
                    break;
                }
            }
            for(int i=n-1;i>=0;i--){
                if(v[i]==1){
                    x2=i;
                    break;
                }
            }
            cout<<abs(x2-x1+1-one)<<endl;
        }
    }
}