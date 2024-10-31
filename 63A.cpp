#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    string s1,s2;
    vector<string> r,wc,m,c;
    for(int i=0;i<n;i++){
        cin>>s1>>s2;
        if(s2=="rat") r.push_back(s1);
        else if(s2=="woman" || s2=="child") wc.push_back(s1);
        else if(s2=="man") m.push_back(s1);
        else c.push_back(s1);
    }
    for(string i:r) cout<<i<<endl;
    for(string i:wc) cout<<i<<endl;
    for(string i:m) cout<<i<<endl;
    for(string i:c) cout<<i<<endl;
    return 0;
}   