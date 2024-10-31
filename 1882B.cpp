#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<vector<int>> v(n,vector<int>());
        vector<int> k(n);
        vector<int> v1(50,0);
        for(int i=0;i<n;i++){
            int k;cin>>k[i];
            for(int j=0;j<k;j++){
                cin>>v[i][j];
                v1[v[i][j]]++;
            }
        }
        int m=INT_MAX;
        int idx;
        for(int i=0;i<50;i++){
            if(v1[i]!=0 && v1[i]<m){
                m=v1[i];
                idx=i;
            }
        }
        set<int> s;
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                if(idx==v[i][j]){
                    idx=i;
                    break;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(idx!=i){
                for(int j=0;j<k;j++){
                    s.insert(v[i][j]);
                }
            }
        }
        cout<<s.size()<<endl;
    }
    return 0;
}