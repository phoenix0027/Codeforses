#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int k,q;
        cin>>k>>q;
        int v1[k],v2[q];

        for(int i=0;i<k;i++){
            cin>>v1[i];
        }
        for(int i=0;i<q;i++){
            cin>>v2[i];
        }


        for(int i=0;i<q;i++){
            if(v1[0]>v2[i]) cout<<v2[i]<<" ";
            else cout<<v1[0]-1<<" ";
        }
        cout<<endl;
    }
}