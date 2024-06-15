#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b;
    cin>>a>>b;

    
    if(a<b){
        int a1=a,a2=0,a3=7-b;
        for(int i=a+1;i<b;i++){
            if((i-a)<(b-i)) a1++;
            else if((i-a)==(b-i)) a2++;
            else a3++;
        }
        cout<<a1<<" "<<a2<<" "<<a3<<endl;
    }
    else if(a==b){
        cout<<0<<" "<<6<<" "<<0<<endl;
    }
    else{
        int a3=b,a2=0,a1=7-a;
        for(int i=b+1;i<a;i++){
            if((i-b)>(a-i)) a1++;
            else if((i-b)==(a-i)) a2++;
            else a3++;
        }
        cout<<a1<<" "<<a2<<" "<<a3<<endl;
    }
    
}