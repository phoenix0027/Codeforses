#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        long long c1=n/3;
        long long c2=n-c1;
        if(c2%2!=0){
            c1++;
            c2--;
        }
        cout<<c1<<" "<<c2/2<<endl;
    }
}