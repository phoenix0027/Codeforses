#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int i=0;
        while(true){
            if(((1<<i)&x) != ((1<<i)&y)){
                break;
            }
            i++;
        }
        long long ans=pow(2,i);
        cout<<ans<<endl;
    }
    return 0;
}