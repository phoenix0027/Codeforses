#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int> prefix(s.length(),0);
    for(int i=1;i<s.length();i++){
        if(s[i-1]=='('){
            prefix[i]+=prefix[i-1]+1;
        }
        else{
            prefix[i]+=prefix[i-1]-1;
        }
    }
    vector<pair<int,int>> p;
    for(int i=0;i<s.length();i++){
        p.push_back({prefix[i],i});
    }
    sort(p.begin(),p.end(),[](const pair<int,int>& a,pair<int,int>& b){
        if(a.first==b.first) return a.second>b.second;
        return a.first<b.first;
    });
    for(int i=0;i<s.length();i++){
        cout<<s[p[i].second];
    }
    return 0;
}