#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(auto& ch:s){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y'){
            continue;
        }
        else{
            cout<<"."<<ch;
        }
    }
    return 0;
}