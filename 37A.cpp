#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int ans=0;
    int c=1;
    int total=1;
    for(int i=1;i<n;i++){
        if(v[i]==v[i-1]){
            c++;
        }
        else{
            total++;
            ans=max(ans,c);
            c=1;
        }
    }
    ans=max(ans,c);
    cout<<ans<<' '<<total<<endl;
    return 0;
}