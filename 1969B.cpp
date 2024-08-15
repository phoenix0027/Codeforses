#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<char,vector<int>> m;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                m[s[i]].push_back(i);
            }
        }
        int i=0;
        while(s[i]!='1' && i<s.length()){
            i++;
        }
        long long ans=0;
        if(i<s.length()){
            for(int j=0;j<m['0'].size();j++){
                if(m['0'][j]>i){
                    ans+=abs(m['0'][j]-i)+1;
                    i++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}