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
        int ans=2;
        int c=2;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                c++;
            }
            else{
                ans=max(ans,c);
                c=2;
            }
        }
        ans=max(ans,c);
        cout<<ans<<endl;
    }
    return 0;
}