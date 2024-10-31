#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        long long arr[2]={0,0};
        for(int i=0;i<s.length();i++){
            arr[s[i]-'0']++;
        }
        long long ans=0;
        for(int i=0;i<s.length();i++){
            if(arr[!(s[i]-'0')]>0){
                arr[!(s[i]-'0')]--;
            }
            else{
                ans=s.length()-i;
                break;
            }
        }
        cout<<ans<<endl;
    }
}