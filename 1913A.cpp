#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int i=s.length()/2;
        string s1="",s2="";
        while(i>0){
            s1=s.substr(0,i);
            s2=s.substr(i,s.length());
            if(s1[0]!='0' && s2[0]!='0'){
                long long num1=stoll(s1);
                long long num2=stoll(s2);
                if(num1<num2){
                    break;
                }
            }
            i--;
        }
        if(s2[0]!='0' && stoll(s1)<stoll(s2)) cout<<s1<<" "<<s2<<endl;
        else cout<<-1<<endl;
    }
}