#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b,minimum,maximum;
    cin>>a>>b;
    minimum=min(a,b);
    maximum=max(a,b);
    cout<<minimum<<" "<<(maximum-minimum)/2<<endl;
}