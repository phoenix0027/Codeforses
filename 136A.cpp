#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n],arr1[n];
    for(int j=1;j<=n;j++){
        cin>>arr[j];
    }
    for(int i=1;i<=n;i++){
        arr1[i]=i;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(arr[j]==arr1[i]){
                cout<<j<<" ";
            }
        }
    }

}