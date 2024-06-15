#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    string s;cin>>s;
    if(n<=3){
        cout<<s<<endl;
    }
    else{
        if(n%2==0){
            for(int i=0;i<n;i++){
                if(i>0 && i%2==0){
                    cout<<"-"<<s[i];
                }
                else{
                    cout<<s[i];
                }
            }
            cout<<endl;
        }
        else{
            cout<<s[0]<<s[1]<<s[2]<<"-";
            for(int i=3;i<n-2;i++){
                if(i%2==0){
                    cout<<s[i]<<"-";
                }
                else{
                    cout<<s[i];
                }
            }
            cout<<s[n-2]<<s[n-1]<<endl;
        }
    }
    return 0;
}