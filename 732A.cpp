#include<bits/stdc++.h>
using namespace std;

int main(){

    int k,r,ans;
    cin>>k>>r;
    for(int i=1;i<11;i++){
        ans=k*i;
        if(ans%10==0 || ans%10==r){
            cout<<i<<endl;
            break;
        }
        else{
            continue;
        }
    }
}