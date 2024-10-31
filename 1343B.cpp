#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        vector<long long> v;
        long long sum=0;
        int x=2;
        if(n%4==0){
            for(int i=0;i<n/2;i++){
                v.push_back(x);
                sum+=x;
                x+=2;
            }
            x=1;
            for(int i=0;i<n/2;i++){
                if((i+1)<(n/2)){
                    v.push_back(x);
                    sum-=x;
                    x+=2;
                }
                else{
                    v.push_back(sum);
                }
            }
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}