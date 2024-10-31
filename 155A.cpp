#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=arr[0],max=arr[0],c=0;
    for(int i=1;i<n;i++){

        if(min>arr[i]){
            min=arr[i];
            c++;
        }
        else if(max<arr[i]){
            max=arr[i];
            c++;
        }
    }
    cout<<c;
}