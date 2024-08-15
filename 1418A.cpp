#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x, y, k;
        cin >> x >> y >> k;

        long long a = k * (y + 1) - 1;
        long long l = x - 1;
        long long ans = (a + l - 1) / l; 

        ans += k;
        cout << ans << endl;
    }
    return 0;
}
