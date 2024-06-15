#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n,sum=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        for(int i=0;i<n;i++){
            if(arr[i]<0){
                sum-=arr[i];
            }
            else{
                sum+=arr[i];
            }
        }
        cout<<sum<<endl;
    }
}