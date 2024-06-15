#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    ll t;
    cin>>t;

    while(t>0){

        ll n,k,even=0,odd=0;
        cin>>n>>k;

        ll arr[26]={0};
        string str;
        cin>>str;

        for(int i=0;i<str.length();i++){
            arr[str[i]-'a']+=1;
        }

        for(int i=0;i<26;i++){
            if(arr[i]%2!=0){
                odd++;
            }
        }


        if((n-k)==1){
            cout<<"YES"<<endl;
        }
        else if((n-k)%2==0){
            if(k>=odd){
                k-=odd;
                if(k%2==0){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            odd-=1;
            if(k>=odd){
                k-=odd;
                if(k%2==0){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                cout<<"NO"<<endl;
            }
        }

        t--;
    }
}