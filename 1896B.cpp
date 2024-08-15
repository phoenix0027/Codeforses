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
        int i=0;
        while(i<s.length() && s[i]!='A'){
            i++;
        }
        int j=s.length()-1;
        while(j>=0 && s[j]!='B'){
            j--;
        }
        if(j-i < 0){
            cout<<0<<endl;
        }
        else{
            cout<<j-i<<endl;
        }
    }
    return 0;
}