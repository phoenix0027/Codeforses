#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;cin>>s;
    int len=s.length();
    int s1=26-len;
    s1=s1*(len+1);
    int s2=len*len;
    cout<<s1+s2<<endl;
}