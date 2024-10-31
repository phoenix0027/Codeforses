#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long mini,maxi;
    if(n%7==0){
        mini=(n/7)*2;
        maxi=mini;
    }
    else{
        long long r=n%7;
        mini=(n/7)*2;
        if(r>5) mini+=1;
        if(r>1){
            maxi=((n/7)*2)+2;
        }
        else{
            maxi=r+((n/7)*2);
        }
    }
    cout<<mini<<" "<<maxi<<endl;
}