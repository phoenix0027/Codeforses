#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int n;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    float m=INT32_MAX;
    for(int i=0;i<n;i++){
        int x=arr[i][0]-a;
        int y=arr[i][1]-b;
        float diff=sqrt(x*x+y*y);
        float v=(float)diff/arr[i][2];
        m=min(m,v);
    }
    cout.precision(20);
    cout<<fixed;
    cout<<m<<endl;
}