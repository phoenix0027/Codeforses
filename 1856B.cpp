#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t>0){

        long long n,s=0,s1=0,sum=0;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);

        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                s++;
            }
            if(arr[i]==1){
                s1++;
            }
        }

        if(n==1){
            cout<<"NO"<<endl;
        }
        else if(n%2==0 && s==0){
            cout<<"YES"<<endl;
        }
        else if(n%2!=0 && s==0 && n>1){
            if(arr[n-1]>2 || arr[n-2]>2 || arr[n-3]>2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(s1>=(n/2)){
            for(int i=s1;i<n;i++){
                sum+=arr[i];
            }
            n=n-s1;
            if(sum>=(s1+n)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
        }

        t--;
    }
}