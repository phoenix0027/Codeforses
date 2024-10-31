#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t>0){

        int n,m;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        if(n%2==0){
            m=n/2;
        }
        else{
            m=(n/2)+1;
        }

        sort(arr,arr+n);

        int c=1;
        for(int i=m-1;i<n;i++){
            if(arr[i]==arr[i+1]){
                c++;
            }
            else{
                break;
            }
        }
        cout<<c<<endl;


        t--;
    }
}