#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    string str="";
    for(auto& ch:s){
        if(ch=='h' && str==""){
            str+="h";
        }
        else if(ch=='e' && str=="h"){
            str+="e";
        }
        else if(ch=='l' && (str=="he" || str=="hel")){
            str+="l";
        }
        else if(ch=='o' && str=="hell"){
            str+="o";
            break;
        }
    }
    if(str=="hello"){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}