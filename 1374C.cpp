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
        int x=0;
        int ans=0;
        for(auto& ch:s){
            if(ch=='('){
                x++;
            }
            else{
                x--;
            }
            ans=min(ans,x);
        }
        cout<<-ans<<endl;
    }
    return 0;
}