#include<bits/stdc++.h>
using namespace std;

long long v[200001]={0};

void sumnum(){
    for(int i=1;i<=200000;i++){
        long long sum=0;
        long long num=i;
        while(num>0){
            sum+=num%10;
            num=num/10;
        }
        v[i]=v[i-1]+sum;
    }
}

int main(){
    sumnum();
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        cout<<v[n]<<endl;
    }
}