#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v1(n);
        vector<int> v2(n);
        for(int i=0;i<n;i++){
            cin>>v1[i];
        }
        for(int i=0;i<n;i++){
            cin>>v2[i];
        }
        bool t1=true;
        for(int i=0;i<n;i++){
            if(v1[i]!=v2[i]){
                t1=false;
                break;
            }
        }
        reverse(v1.begin(),v1.end());
        bool t2=true;
        for(int i=0;i<n;i++){
            if(v1[i]!=v2[i]){
                t2=false;
                break;
            }
        }
        if(t1 || t2){
            cout<<"Bob"<<endl;
            continue;
        }
        cout<<"Alice"<<endl;
    }
    return 0;
}