#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(n<3){
            cout<<v[0]<<endl;
            continue;
        }
        int m=INT_MIN;
        for(int i=0;i<n;i+=2) m=max(m,v[i]);
        for(int j=n-1;j>=0;j-=2) m=max(m,v[j]);
        cout<<m<<endl;
    }
    return 0;
}