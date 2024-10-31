#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    string s="";
    int i=0;
    while(i<n){
        if((i<(n-2)) && str[i]=='o' && str[i+1]=='g' && str[i+2]=='o'){
            s+="***";
            i+=3;
            while((i<(n-1)) && str[i]=='g' && str[i+1]=='o'){
                i+=2;
            }
        }
        else{
            s+=str[i];
            i++;
        }
    }
    cout<<s<<endl;
}