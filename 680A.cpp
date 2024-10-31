#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    sort(arr,arr+5);
    int s1=0,s2=0,s=0;
    for(int i=4;i>0;i--){
        if(arr[i]==arr[i-1]){
            s1=arr[i]+arr[i-1];
            break;
        }
    }
    for(int i=0;i<3;i++){
        if(arr[i]==arr[i+1] && arr[i+1]==arr[i+2]){
            s2=arr[i]+arr[i+1]+arr[i+2];
            break;
        }
    }
    for(int i:arr) s+=i;
    cout<<s-max(s1,s2)<<endl;
}