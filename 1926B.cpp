#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            string str;
            cin>>str;
            int one=0;
            for(int j=0;j<n;j++){
                if(str[j]=='1') one++;
            }
            if(one>0) v.push_back(one);
        }
        if(v[0]==v[1]){
            cout<<"SQUARE"<<endl;
        }
        else{
            cout<<"TRIANGLE"<<endl;
        }
    }
}