#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int ans=0;
        int m=s1.length()+s2.length();
        int l=s1.length()+s2.length();
        for(int i=0;i<s2.length();i++){
            int j=i;
            for(auto& ch:s1){
                if(j<s2.length() && ch==s2[j]){
                    j++;
                }
            }
            ans=max(ans,j-i);
        }
        cout<<m-ans<<endl;
    }
}