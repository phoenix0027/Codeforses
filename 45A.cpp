#include<bits/stdc++.h>
using namespace std;

int main(){

    string arr[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};

    string str;
    cin>>str;
    int n,a,b;
    cin>>n;

    for(int i=0;i<12;i++){
        if(str==arr[i]){
            b=i;
        }
    }


    if(n%12==0){
        cout<<str<<endl;
    }
    else if((n%12+b)>=12){
        a=n%12;
        b=12-b;
        if(a>b){
            cout<<arr[a-b]<<endl;
        }
        else{
            cout<<arr[b-a]<<endl;
        }
    }
    else{
        a=n%12;
        cout<<arr[b+a]<<endl;
    }
    
}