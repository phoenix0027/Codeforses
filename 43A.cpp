#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<string,int> m;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        m[s]++;
    }
    int ans=0;
    string str;
    for(auto& [i,j]:m){
        if(ans<j){
            ans=j;
            str=i;
        }
    }
    cout<<str<<endl;
    return 0;
}