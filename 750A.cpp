#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int p,t,a,c=0;
    cin>>p>>t;
    a=240-t;
    int arr[p];
    for(int i=0;i<p;i++){
        arr[i]=5*(i+1);
    }
    int i=0;
    while(a>0 && i<p && a>=arr[i]){
        a=a-arr[i];
        c++;
        i++;
    }
    cout<<c;
}