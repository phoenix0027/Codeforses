#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    bool t=true;
    for(int i=0;i<str.length();i++){
        if(str[i]=='7' || str[i]=='4') continue;
        else{
            t=false;
            break;
        }
    }
    int sum1=0,sum2=0;
    if(t){
        for(int i=0;i<n/2;i++){
            sum1+=str[i];
        }
        cout<<endl;
        for(int i=n/2;i<n;i++){
            sum2+=str[i];
        }
        if(sum1==sum2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
}