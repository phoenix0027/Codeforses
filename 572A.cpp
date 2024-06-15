#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n1,n2; cin>>n1>>n2;
    long long k,m; cin>>k>>m;
    vector<long long> a(n1),b(n2);
    for(auto &i:a) cin>>i;
    for(auto &i:b) cin>>i;
    if (a[k - 1] < b[n2 - m]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}