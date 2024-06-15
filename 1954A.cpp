#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n,m,k;
        cin>>n>>m>>k;
        int a=1,b=k;
        int arr[n];

        for(int i=0;i<n;i++){
            if(a<m) arr[i]=a;
            else if(a==m){
                arr[i]=a;
                a=0;
            }
            a++;
        }

        for(int i=0;i<n;i++){
            if(arr[i]>1) k-=1;
        }

        if(k==0 || m==1 || m==b) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}