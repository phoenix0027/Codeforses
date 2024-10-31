#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    vector<int> v(n);for(int i=0;i<n;i++) cin>>v[i];
    int c=0;
    for(int i=0;i<n;i++){
        if((v[i]+k)<=5){
            c++;
        }
    }
    cout<<c/3<<endl;
}