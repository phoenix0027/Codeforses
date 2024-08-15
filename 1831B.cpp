#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(2*n);
        for(int i=0;i<2*n;i++){
            cin>>a[i];
        }
        map<int,pair<int,int>> m;
        int c=1;
        m[a[0]].first=c;
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]) c++;
            else{
                m[a[i-1]].first=max(m[a[i-1]].first,c);
                c=1;
            }
        }
        m[a[n-1]].first=max(m[a[n-1]].first,c);
        c=1;
        for(int i=n+1;i<2*n;i++){
            if(a[i]==a[i-1]) c++;
            else{
                m[a[i-1]].second=max(m[a[i-1]].second,c);
                c=1;
            }
        }
        m[a[2*n-1]].second=max(m[a[2*n-1]].second,c);
        int ans=INT_MIN;
        for(auto& [vale,p]:m){
            ans=max(ans,p.first+p.second);
        }
        cout<<ans<<endl;
    }
    return 0;
}