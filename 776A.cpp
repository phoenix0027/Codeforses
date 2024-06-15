#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<a<<" "<<b<<endl;
        string c,d;
        cin>>c>>d;
        if(a==c){
            a=d;
        }
        else if(a==d){
            a=c;
        }
        else if(b==c){
            b=d;
        }
        else if(b==d){
            b=c;
        }
    }
    cout<<a<<" "<<b<<endl;
}