#include<bits/stdc++.h>
using namespace std;

int main(){

    string s1,s2;
    cin>>s1>>s2;
    char s3[s1.length()];

    for(int i=0;i<s1.length();i++){
        if(s1[i]==s2[i]){
            s3[i]='0';
        }
        else{
            s3[i]='1';
        }
    }
    
    for(int i=0;i<s1.length();i++){
        cout<<s3[i];
    }
}