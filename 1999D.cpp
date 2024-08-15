#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int i=0,j=0;
        while(i<s1.length() && j<s2.length()){
            if(s1[i]==s2[j]){
                j++;
            }
            else if(s1[i]=='?'){
                s1[i]=s2[j];
                j++;
            }
            i++;
        }
        while(i<s1.length()){
            if(s1[i]=='?'){
                s1[i]='a';
            }
            i++;
        }
        if(j==s2.length()){
            cout<<"YES\n"<<s1<<"\n";
            continue;
        }
        cout<<"NO"<<endl;
    }
}