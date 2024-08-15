#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string str=s;
        int p;
        cin>>p;
        int cost=0;
        for(auto& ch:s){
            cost+=(ch-'a'+1);
        }
        sort(s.rbegin(),s.rend());
        map<char,int> m;
        for(auto& ch:s){
            if(cost>p){
                m[ch]++;
                cost-=(ch-'a'+1);
            }
        }
        for(auto& i:str){
            if(m[i]>0){
                m[i]--;
                continue;
            }
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}