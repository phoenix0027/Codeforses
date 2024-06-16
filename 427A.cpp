#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;cin>>n;
    vector<int> v(n);for(int i=0;i<n;i++) cin>>v[i];
    stack<int> st;
    long long c=0;
    for(int i=0;i<n;i++){
        if(v[i]>0){
            st.push(v[i]);
        }
        else{
            if(!st.empty() && st.top()!=-1){
                int x=st.top()+v[i];
                st.pop();
                if(x>0) st.push(x);
            }
            else{
                c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}