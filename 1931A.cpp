#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s="";
        if(n<29){
            s+="aa";
            s+=char(n-2+96);
        }
        else if(n>28 && n<54){
            s+="a";
            s+=char(n-26-1+96);
            s+="z";
        }
        else{
            s+="";
            s+=char(n-52+96);
            s+="zz";
        }
        cout<<s<<endl;
    }
}