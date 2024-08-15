#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int i=0,j=n-1;
        while(v[0]==v[i] && i<=j) i++;
        while(v[n-1]==v[j] && i<=j) j--;
        if(v[0]==v[n-1]){
            cout<<j-i+1<<endl;
            continue;
        }
        else if(i>=(n-j)){
            cout<<n-i<<endl;
            continue;
        }
        cout<<j+1<<endl;
    }
    return 0;
}