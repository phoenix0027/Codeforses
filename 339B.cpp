#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m;
    cin>>n>>m;
    queue<long long> q;
    int x;
    q.push(1);
    for(int i=0;i<m;i++){
        cin>>x;
        q.push(x);
    }
    long long ans=0;
    while(q.size()>1){
        int x=q.front();
        q.pop();
        if(x>q.front()){
            ans+=(n-abs(x-q.front()));
        }
        else{
            ans+=(abs(x-q.front()));
        }
    }
    cout<<ans<<endl;
    return 0;
}