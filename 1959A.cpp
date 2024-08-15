#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r,b;
        cin>>n>>r>>b;

        string s="";
        
        while(r>0 || b>0){
            int x=r/(b+1);
            while(x>0 && r>0){
                s+='R';
                x--; r--;
            }
            if(b) s+='B';
            b--;
        }
        cout<<s<<endl;
    }
    return 0;
}