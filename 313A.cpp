#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,a,b;
    cin>>n;
    a=abs(n%10);
    b=abs(n%100)/10;
    if(n<0){
        if(a>=b){
            cout<<n/10<<endl;
        }
        else{
            cout<<((n/100)*10)-a<<endl;
        }
    }
    else{
        cout<<n<<endl;
    }
}