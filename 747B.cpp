#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    string str;
    cin>>str;
    int a=0,g=0,t=0,c=0,q=0;
    int arr[4]={n/4,n/4,n/4,n/4};

    for(int i=0;i<str.length();i++){
        if(str[i]=='A') a++;
        else if(str[i]=='C') c++;
        else if(str[i]=='G') g++;
        else if(str[i]=='T') t++;
        else if(str[i]=='?') q++;
    }

    arr[0]-=a;
    arr[1]-=c;
    arr[2]-=g;
    arr[3]-=t;


    bool b=true;
    if(a>(n/4) || c>(n/4) || t>(n/4) || g>(n/4)){
        b=false;
    }
    else if(n%4==0){
        for(int i=0;i<str.length();i++){
            if(arr[0]>0 && str[i]=='?'){
                str[i]='A';
                arr[0]-=1;
            }
            else if(arr[1]>0 && str[i]=='?'){
                str[i]='C';
                arr[1]-=1;
            }
            else if(arr[2]>0 && str[i]=='?'){
                str[i]='G';
                arr[2]-=1;
            }
            else if(arr[3]>0 && str[i]=='?'){
                str[i]='T';
                arr[3]-=1;
            }
        }
    }
    else{
        b=false;
    }

    if(b) cout<<str<<endl;
    else cout<<"==="<<endl;
}