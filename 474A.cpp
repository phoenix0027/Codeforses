#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1="qwertyuiop";
    string s2="asdfghjkl;";
    string s3="zxcvbnm,./";
    char ch;cin>>ch;
    string s;cin>>s;
    for(int i=0;i<s.length();i++){
        for(int j=0;j<s1.length();j++){
            if(s[i]==s1[j]){
                if(ch=='R' && j>0){
                    s[i]=s1[j-1];
                }
                else if(ch=='L' && j<s1.length()-1){
                    s[i]=s1[j+1];
                }
                break;
            }
        }
        for(int j=0;j<s2.length();j++){
            if(s[i]==s2[j]){
                if(j>0 && ch=='R'){
                    s[i]=s2[j-1];
                }
                else if(j<s2.length()-1 && ch=='L'){
                    s[i]=s2[j+1];
                }
                break;
            }
        }
        for(int j=0;j<s3.length();j++){
            if(s[i]==s3[j]){
                if(j>0 && ch=='R'){
                    s[i]=s3[j-1];
                }
                else if(j<s3.length()-1 && ch=='L'){
                    s[i]=s3[j+1];
                }
                break;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}