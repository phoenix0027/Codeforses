#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int c1=0;
        if((a+b+c)%2!=0){
            cout<<-1<<endl;
            continue;
        }
        if((b+a)>c){
            c1+=((b+a)-c)/2;
            b-=c1;
            a-=c1;
        }
        
        c1+=(a+b);
        cout<<c1<<endl;
    }

    return 0;
}