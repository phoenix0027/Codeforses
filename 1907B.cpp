#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<int> up;
        stack<int> low;
        for(int i=0;i<s.length();i++){
            if((s[i]>='A' && s[i]<='Z') && s[i]!='B'){
                up.push(i);
            }
            else if((s[i]>='a' && s[i]<='z') && s[i]!='b'){
                low.push(i);
            }
            else if(s[i]=='b' && !low.empty()){
                low.pop();
            }
            else if(s[i]=='B' && !up.empty()){
                up.pop();
            }
        }
        vector<int> v;
        while(!up.empty()){
            v.push_back(up.top());
            up.pop();
        }
        while(!low.empty()){
            v.push_back(low.top());
            low.pop();
        }
        sort(v.begin(),v.end());
        string str="";
        for(int i=0;i<v.size();i++){
            str+=s[v[i]];
        }
        cout<<str<<endl;
    }
    return 0;
}