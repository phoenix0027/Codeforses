#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,sum=0;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            v.push_back(i+1);
            sum+=(i+1);
        }
        if(sum%n==0){
            for(int i:v) cout<<i<<" ";
        }
        else{
            int a=sum%n;
            v[0]+=a;
            for(int i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
        }
        cout<<endl;
    }
    
}