#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t>0){

        string str;
        cin>>str;
        int c=0;

        for(int i=0;i<str.length()-1;i++){
            if(str[i]=='i' && str[i+1]=='t'){
                cout<<"YES"<<endl;
                c=1;
                break;
            }
        }
        if(c==0){
            cout<<"NO"<<endl;
        }

        t--;
    }
}