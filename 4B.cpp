#include<bits/stdc++.h>
using namespace std;
 
// #define int long long int
#define endl '\n'
#define CHOTHANI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define lcm(a,b) a*b/(__gcd(a,b))
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define print(ans) cout << ans << endl
#define pb push_back
#define pp pop_back
const int M = 1e9+7;
const int N = 1e5+10;
 
int main()
{
            CHOTHANI
    int t=1;
    for(int g=0;g<t;g++)
    {
        
        int n,k;
        cin >> n >> k;
        pair<int,int>p[n];
        int mn=0;
        int mx=0;
        for(int i=0;i<n;i++)
        {
            cin >> p[i].first >> p[i].second;
            mn+=p[i].first;
            mx+=p[i].second;
        }
        if(!(k>=mn && k<=mx ))
        {
            NO;
            continue;
        }

        int a[n];
        for(int i=0;i<n;i++) a[i]=0;
        for(int i=0;i<n && k>0;i++)
        {
            a[i] = p[i].first;
            k-=p[i].first;
        }
        for(int i=0;i<n;i++)
        {
            a[i] += min(k,p[i].second-p[i].first);
            k -= min(k,p[i].second-p[i].first);
        }
        YES;
        for(int i=0;i<n;i++) cout << a[i] << " ";
        cout << endl;
    }
}