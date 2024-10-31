#include<bits/stdc++.h>
using namespace std;

int main(){

    int x,y,z;
    cin>>x>>y>>z;
    int arr[6];
    arr[0]=x-y;
    arr[1]=x-z;
    arr[2]=y-x;
    arr[3]=y-z;
    arr[4]=z-x;
    arr[5]=z-y;
    for(int i=0;i<6;i++){
        if(arr[i]<0){
            arr[i]=-(arr[i]);
        }
    }
    int a=arr[0]+arr[1];
    int b=arr[2]+arr[3];
    int c=arr[4]+arr[5];
    int min=(a<b)?(a<c?a:c):(b<c?b:c);
    cout<<min;
}