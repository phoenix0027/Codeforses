#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    deque<char> q(str.begin(),str.end());
    int c=0;
    do{
        char ch=q.front();
        q.pop_front();
        q.push_back(ch);
        c++;
    }while(str!=string(q.begin(), q.end()));
    cout<<c<<endl;
}