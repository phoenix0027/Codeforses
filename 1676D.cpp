#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> v(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        long long ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int k=i,l=j;
                long long sum=0;
                while(k<n-1 && l<m-1){
                    k++; l++;
                    sum+=v[k][l];
                }
                k=i,l=j;
                while(k<n && l>=0){
                    sum+=v[k][l];
                    k++; l--;
                }
                k=i,l=j;
                while(k>0 && l>0){
                    k--; l--;
                    sum+=v[k][l];
                }
                k=i,l=j;
                while(k>0 && l<m-1){
                    k--; l++;
                    sum+=v[k][l];
                }
                ans=max(ans,sum);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}