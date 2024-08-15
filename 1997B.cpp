#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        int c1=0,c2=0;
        int x1=0,x2=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s1[i]=='.' && s2[i]=='x'){
                if(c1!=0 && abs(x1-i)==2){
                    ans++;
                }
                c1=1;
                x1=i;
            }
            if(s1[i]=='x' && s2[i]=='.'){
                if(c2!=0 && abs(x2-i)==2){
                    ans++;
                }
                c2=1;
                x2=i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}