#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;

    if(n>=(to_string(t).length())){
        cout<<t;
        for(int i=0;i<n-to_string(t).length();i++){
            cout<<0;
        }
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}