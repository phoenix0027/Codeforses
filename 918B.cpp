#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    string a1[n+1],a2[m],str="",strr="",str1,str2,str3="";
    string a11[n+1],a22[n+1];

    for(int i=0;i<=n;i++){
        getline(cin,str1);
        for(int j=0;j<str1.length();j++){
            if(str1[j]!=' ') str+=str1[j];
            else{
                a11[i]=str;
                str="";
                break;
            }
        }
        for(int j=0;j<str1.length();j++){
            if(str1[str1.length()-1-j]!='.') strr+=str1[str1.length()-1-j];
            else{
                a22[i]=strr;
                strr="";
                break;
            }
        }

    }

    for(int i=0;i<m;i++){
        getline(cin,str1);
        a2[i]=str1;
    }

    for(int i=0;i<m;i++){
        str2=a2[i];
        for(int j=0;j<a2[i].length();j++){
            if(str2[str2.length()-1-j]!='.') str3+=str2[str2.length()-1-j];
            else{
                break;
            }
        }
        for(int k=0;k<=n;k++){
            if(a22[k]==str3){
                cout<<a2[i]<<" "<<"#"<<a11[k]<<endl;
                str3="";
                break;
            }
        }
    }
}