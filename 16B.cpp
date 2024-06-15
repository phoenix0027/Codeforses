#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ll n,m,a,b;
    cin>>n>>m;
    vector<ll>v1,v2;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        v1.push_back(a);
        v2.push_back(b);
    }
    ll tmp,tmp1;
    for(int i=0;i<m-1;i++) {
        int maxIndex=i;
        for (int j=i+1;j<m;j++) {
            if(v2[j]>v2[maxIndex]) {
                maxIndex=j;
            }
        }
        if(maxIndex!= i) {
            int tmp=v2[i];
            v2[i]=v2[maxIndex];
            v2[maxIndex]=tmp;

            tmp=v1[i];
            v1[i]=v1[maxIndex];
            v1[maxIndex]=tmp;
        }
    }

    ll sum=0;
    for(int i=0;i<m;i++){
        if(v1[i]<n){
            sum+=(v1[i]*v2[i]);
            n=n-v1[i];
        }
        else{
            sum+=(n*v2[i]);
            break;
        }
    }
    cout<<sum<<endl;
}