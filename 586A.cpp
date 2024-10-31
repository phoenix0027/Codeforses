#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];for(int i=0;i<n;i++) cin>>arr[i];
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            c++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==1&&arr[i+1]==0&&arr[i+2]==1){
            c++;
        }
    }
    cout<<c<<endl;
}