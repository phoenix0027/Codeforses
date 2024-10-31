#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    long long minimum,cost=0;
    if(e<f){
        minimum=min(b,min(c,d));
        cost+=(minimum*f);
        d-=minimum;
        if(d!=0){
            minimum=min(a,d);
            cost+=(minimum*e);
        }
    }
    else{
        minimum=min(a,d);
        cost+=(minimum*e);
        d-=minimum;
        if(d!=0){
            minimum=min(b,min(c,d));
            cost+=(minimum*f);
        }
    }
    cout<<cost<<endl;
}