#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(auto &i:v) cin>>i;
    sort(v.begin(), v.end());
    long long od=0,sum=0;
    vector<long long> id;
    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            sum+=v[i];
        }
        else{
            sum+=v[i];
            od++;
            id.push_back(i);
        }
    }
    if(od%2!=0){
        sum-=v[id[0]];
    }
    cout<<sum<<endl;
}