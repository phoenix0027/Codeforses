#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        vector<int> v(3,0);
        for(int i=0;i<3;i++){
            string s;cin>>s;
            for(int j=0;j<s.length();j++){
                if(s[j]!='?') v[s[j]-'A']++;
            }
        }
        for(int i=0;i<3;i++){
            if(v[i]!=3){
                cout<<char(i+65)<<endl;
                break;
            }
        }
    }
}