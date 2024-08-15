#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push('(');
            }
            else if(s[i]=='_'){
                if(st.empty()){
                    st.push('(');
                    s[i]='(';
                }
                else{
                    st.pop();
                    s[i]=')';
                }
            }
            else if(s[i]==')') st.pop();
        }
        int cost=0;
        int i=0;
        int j=i+1;
        while(j<s.length()){
            if(s[j]==')' && s[i]=='('){
                cost+=(j-i);
                i++; j++;
            }
            else if(s[i]==')'){
                i++;
            }
            else if(s[j]=='('){
                j++;
            }
        }
        cout<<cost<<endl;
        // cout<<s<<endl;
    }
    return 0;
}