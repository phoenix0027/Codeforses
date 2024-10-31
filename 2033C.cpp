#include<bits/stdc++.h>
using namespace std;

#define M__K ios::sync_with_stdio(false); cin.tie(0);
#define lcm(a, b) ((a) * (b) / (__gcd((a), (b))))
#define ll long long int
#define vi vector<int>
#define vll vector<long long>
#define vch vector<char>
#define vstr vector<string>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define all(x) (x).begin(), (x).end()
#define srt(x) sort(all(x))
#define rev(x) reverse(all(x))
#define ff first
#define ss second
#define pb push_back
#define vpii vector<pii>
#define vpll vector<pll>
#define vpch vector<char>
#define vpstr vector<string>
#define println(x) cout << (x) << "\n";
#define print(x) cout << (x);
#define prints(x) cout << (x) << " ";
#define in(x) cin >> (x);
#define forn(i, n) for(int i = 0; i < (n); ++i)
#define forab(i, a, b) for(int i = (a); i <= (b); ++i)
#define forabrev(i, a, b) for(int i = (b); i >= (a); --i)
#define forall(it, v) for(auto &it : (v))
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
const int M=1e9+7;

void solve() {
    int n;
    cin>>n;
    vi v(n);
    forn(i,n) cin>>v[i];

    int size=(n+1)/2;
    vector<vector<int>> dp(size,vector<int>(2,0));

    dp[0][0]=0;
    dp[0][1]=0;

    for(int i=1;i<size;++i) {
        dp[i][0]=min(dp[i-1][0]+(v[i]==v[i-1])+(v[n-i-1]==v[n-i]),
                    dp[i-1][1]+(v[i]==v[n-i])+(v[n-i-1]==v[i-1]));
        dp[i][1]=min(dp[i-1][0]+(v[i]==v[i-1])+(v[n-i-1]==v[n-i]),
                    dp[i-1][1]+(v[i]==v[n-i])+(v[n-i-1]==v[i-1]));
    }

    ll ans=min(dp[size-1][0],dp[size-1][1]);

    if(n%2==0){
        ans+=(v[n/2-1]==v[n/2]);
    }

    println(ans);
}


int main(){
                                        M__K;
    int t=1;
    in(t);
    while(t--){
        solve();
    }
    return 0;
}