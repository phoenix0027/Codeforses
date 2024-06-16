#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    deque<int> q(n);
    for(int i=0;i<n;i++){
        cin>>q[i];
    }
    int sum1=0,sum2=0;
    int i=0;
    while(!q.empty()){
        int a=q.front();
        int b=q.back();
        if(i%2==0){
            if(a>b){
                sum1+=a;
                q.pop_front();
            }
            else{
                sum1+=b;
                q.pop_back();
            }
        }
        else{
            if(a>b){
                sum2+=a;
                q.pop_front();
            }
            else{
                sum2+=b;
                q.pop_back();
            }
        }
        i++;
    }
    cout<<sum1<<" "<<sum2<<endl;
}