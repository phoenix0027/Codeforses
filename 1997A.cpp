#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string ans="";
        if(s.length()<2){
            if(s[0]!='z') cout<<s<<char(s[0]+1)<<endl;
            else cout<<s<<char(s[0]-1)<<endl;
            continue;
        }
        int i=1;
        while(i<s.length() && s[i]!=s[i-1]){
            ans+=s[i-1];
            i++;
        }
        ans+=s[i-1];
        if(s[i-1]!='z') ans+=s[i-1]+1;
        else ans+=s[i-1]-1;
        while(i<s.length()){
            ans+=s[i];
            i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}