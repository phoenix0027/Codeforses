#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        vector<long long> v(n);for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        int num1,num2;
        if(v[0]==1){
            cout<<"Yes"<<endl;
        }
        else{
            num1=v[0];
            for(int i=1;i<n;i++){
                if(v[i]%num1!=0){
                    num2=v[i];
                    break;
                }
            }
            bool t=true;
            for(int i=0;i<n;i++){
                if(v[i]%num1!=0 && v[i]%num2!=0){
                    t=false;
                    break;
                }
            }
            if(t) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}