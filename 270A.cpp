#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t>0){
        float n;
        cin>>n;
        float a,i=3;
    
        while(true){
            a=(180*(i-2))/i;
            if(a==n){
                cout<<"YES"<<endl;
                break;
            }
            else if(a>n){
                cout<<"NO"<<endl;
                break;
            }
            i++;
        }
        t--;
    }
}