#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t>0){

        ll arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        sort(arr,arr+3);

        ll min=arr[0],a=0,ans=0;

        for(int i=1;i<3;i++){
            if(arr[i]%min!=0){
                ans=1;
            }
        }

        for(int i=1;i<3;i++){
            a+=(arr[i]/min)-1;
        }
        
        if(ans==1){
            cout<<"NO"<<endl;
        }
        else if(a>3){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

        t--;
    }
}