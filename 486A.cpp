#include<iostream>
using namespace std;

int main(){

    long long n,a=0;
    cin>>n;

    if(n%2==0){
        a=n/2;
        cout<<a<<endl;
    }
    else{
        a=((n+1)/2)*(-1);
        cout<<a<<endl;
    }

    return 0;
}