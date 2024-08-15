#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        vector<int> v2(n);
        int odd=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2!=0){
                odd=max(odd,v[i]);
            }
            v2.push_back(v[i]);
        }
        sort(v.begin(),v.end());
        sort(v2.begin(),v2.end(),greater<int>());
        int odd1=odd;
        if(!odd){
            cout<<0<<endl;
        }
        else{
            int ans1=0,ans2=0;
            for(int i=0;i<n;i++){
                if(v[i]%2==0 && v[i]<odd){
                    odd=max(odd,(v[i]+odd));
                    ans1++;
                }
                if(v[i]%2==0 && v[i]>odd){
                    int x=(2*v[i])+odd;
                    odd=max(odd,x);
                    ans1+=2;
                }
            }
            for(int i=0;i<n;i++){
                if(v2[i]%2==0 && v2[i]<odd1){
                    odd1=max(odd1,(v2[i]+odd1));
                    ans2++;
                }
                if(v2[i]%2==0 && v2[i]>odd1){
                    int x=(2*v2[i])+odd1;
                    odd1=max(odd1,x);
                    ans2+=2;
                }
            }
            long long ans=min(ans1,ans2);
            cout<<ans<<endl;
        }
    }
    return 0;
}