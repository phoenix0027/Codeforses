#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,c=0;
    cin>>n;
    string arr[n+1];

    for(int i=0;i<n+1;i++){
        getline(cin,arr[i]);
    }
    sort(arr,arr+n+1);
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            c++;
        }
    }
    cout<<n-c<<endl;
}