#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    int a,b,c;
    for(int i=0;i<n-1;i++){
        cin>>c;
        v.push_back(c);
    }
    cin>>a>>b;

    int sum=0;
    for(int i=a-1;i<b-1;i++){
        sum+=v[i];
    }
    cout<<sum<<endl;
}