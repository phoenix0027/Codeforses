#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        string st=str.substr(0,3);
        if(s==st){
            c++;
        }
    }
    if(n%c==0 && ((c!=1 && n!=1) || (n==2 && c==1))){
        cout<<"home"<<endl;
    }
    else{
        cout<<"contest"<<endl;
    }
}