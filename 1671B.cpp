#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        vector<int> vec;
        int sum = 0;
        if(n>2){
            for(int i = 1; i < n; i++){
                vec.push_back(v[i] - v[i-1]);
                sum += vec.back();
            }
        }
        else{
            cout << "YES" << endl;
            continue;
        }
        int x = sum / vec.size();
        bool t = true;
        for(int i = 0; i < vec.size(); i++){
            if((vec[i]-x)==-1 || (vec[i]-x)==1 || (vec[i]-x)==0){
                continue;
            }
            else{
                t=false;
                break;
            }
        }
        if(t){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
