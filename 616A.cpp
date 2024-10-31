#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    long long l1=s1.length(),l2=s2.length();
    if(l1>l2 && s1[0]!='0'){
        cout<<">"<<endl;
    }
    else if(l2>l1 && s2[0]!='0'){
        cout<<"<"<<endl;
    }
    else if(l2<l1 && s1[0]=='0'){
        long long p1=0,p2=0;
        while(s1[p1]=='0'){
            p1++;
        }
        while(s2[p2]=='0'){
            p2++;
        }
        if((l1-p1)>(l2-p2)){
            cout<<">"<<endl;
        }
        else if((l1-p1)<(l2-p2)){
            cout<<"<"<<endl;
        }
        else{
            bool t=true;
            while(p2<l2 && p1<l1){
                if(s1[p1]>s2[p2]){
                    cout<<">"<<endl;
                    t=false;
                    break;
                }
                else if(s1[p1]<s2[p2]){
                    cout<<"<"<<endl;
                    t=false;
                    break;
                }
                p1++;
                p2++;
            }
            if(t) cout<<"="<<endl;
        }
    }
    else if(l2>l1 && s2[0]=='0'){
        long long p1=0,p2=0;
        while(s2[p2]=='0'){
            p2++;
        }
        while(s1[p1]=='0'){
            p1++;
        }
        if((l2-p2)>(l1-p1)){
            cout<<"<"<<endl;
        }
        else if((l2-p2)<(l1-p1)){
            cout<<">"<<endl;
        }
        else{
            bool t=true;
            while(p2<l2 && p1<l1){
                if(s1[p1]>s2[p2]){
                    cout<<">"<<endl;
                    t=false;
                    break;
                }
                else if(s1[p1]<s2[p2]){
                    cout<<"<"<<endl;
                    t=false;
                    break;
                }
                p1++;
                p2++;
            }
            if(t) cout<<"="<<endl;
        }
    }
    else{
        long long p1=0,p2=0;
        bool t=true;
        while(p1<l1 && p2<l2){
            if(s1[p1]>s2[p2]){
                cout<<">"<<endl;
                t=false;
                break;
            }
            else if(s1[p1]<s2[p2]){
                cout<<"<"<<endl;
                t=false;
                break;
            }
            p1++;
            p2++;
        }
        if(t) cout<<"="<<endl;
    }
}