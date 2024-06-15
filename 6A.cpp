#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> v[i];
    }
    vector<vector<int>> a;
    a.push_back({v[0], v[1], v[2]});
    a.push_back({v[0], v[1], v[3]});
    a.push_back({v[0], v[2], v[3]});
    a.push_back({v[3], v[1], v[2]});
    
        bool f = true;
        string ans;
    for (int i = 0; i < 4; i++)
    {
        // for (int j = 0; j < 3; j++)
        // {

            if (a[i][0]+a[i][1]>a[i][2] && a[i][0]+a[i][2]>a[i][1] && a[i][1]+a[i][2]>a[i][0])
            {
                ans = "TRIANGLE";
                f=false;
                break;
                // break;
            }
            if(a[i][0]+a[i][1]==a[i][2] || a[i][0]+a[i][2]==a[i][1] || a[i][1]+a[i][2]==a[i][0]){
                // cout<<"SEGMENT";
                f=false;
                ans="SEGMENT";
                // f=false;
                // break;
            }
    }
    if(f){
        cout<<"IMPOSSIBLE";
    }
    else{
        cout<<ans;
    }
    
}