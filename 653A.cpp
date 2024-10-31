#include<bits/stdc++.h>
using namespace std;

void sortV(vector<int> &v){
    sort(v.begin(), v.end());
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i:v) cin>>i;
    sortV(v);
    set<int> s(v.begin(),v.end());
    vector<int> v1(s.begin(),s.end());
    for(int i=0;i<n-2;i++){
        if(v1[i]+1==v1[i+1] && v1[i]+2==v1[i+2]){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}