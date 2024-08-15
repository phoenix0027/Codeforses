#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    string str="";
    vector<string> v;
    bool t=false;
    for(auto& ch:s){
        if(ch!=' ' && ch!=',' && ch!='.' && ch!='?' && ch!='!'){
            str+=ch;
            t=true;
        }
        else{
            if(t){
                v.push_back(str);
                str = "";
                t=false;
            }
            if(ch==',') v.push_back(",");
            if(ch=='!') v.push_back("!");
            if(ch=='?') v.push_back("?");
            if(ch=='.') v.push_back(".");
        }
    }
    if(t) v.push_back(str);

    cout<<v[0];
    for(int i=1;i<v.size();i++){
        if(v[i]=="," || v[i]=="." || v[i]=="?" || v[i]=="!") cout<<v[i];
        else cout<<" "<<v[i];
    }
    return 0;
}