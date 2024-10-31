#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n;
    getline(cin,s);
    if(s==" of week"){
        if(n==5 || n==6){
            cout<<53<<endl;
        }
        else{
            cout<<52<<endl;
        }
    }
    else{
        if(n<=29){
            cout<<12<<endl;
        }
        else if(n==30){
            cout<<11<<endl;
        }
        else{
            cout<<7<<endl;
        }
    }
    return 0;
}