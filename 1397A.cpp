#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[26]={0};
        string str;
        vector<string> v;
        for(int i=0;i<n;i++){
            cin>>str;
            v.push_back(str);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<v[i].length();j++){
                arr[v[i][j]-'a']+=1;
            }
        }
        bool t=true;
        for(int i:arr){
            if(i>0){
                if(i%n==0) continue;
                else{
                    t=false;
                    break;
                }
            }
        }
        if(t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}