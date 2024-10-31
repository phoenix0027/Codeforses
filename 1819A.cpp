#include <bits/stdc++.h>
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
#define umpii unordered_map<int, int>
#define umpll unordered_map<long long, long long>
#define umpchi unordered_map<char, int>
#define umpstr unordered_map<string, int>
#define forn(i, n) for(int i = 0; i < (n); ++i)
#define forab(i, a, b) for(int i = (a); i <= (b); ++i)
#define forabrev(i, a, b) for(int i = (b); i >= (a); --i)
#define forall(it, v) for(auto &it : (v))
#define yes cout << "YES\n";
#define no cout << "NO\n";
const int M = 1e9 + 7;

void solve() {
    ll n;
    cin>>n;
    umpll mp;
    vll v(n);
    forn(i,n){
        cin>>v[i];
        mp[v[i]]++;
    }
    ll MEX = 0;
    while(mp[MEX]){
        MEX++;
    }
    if(mp[MEX+1]!=0){
        ll s,e;
        for(ll i=0;i<n;++i){
            if(v[i]==MEX+1){
                s=i;
                break;
            }
        }
        for(ll i=n-1;i>=0;--i){
            if(v[i]==MEX+1){
                e=i;
                break;
            }
        }
        for(ll i=s;i<=e;++i){
            mp[v[i]]--;
        }
        ll x=0;
        while(x<MEX){
            if(mp[x]){
                x++;
            }
            else{
                break;
            }
        }
        if(x==MEX){
            yes;
            return;
        }
        else{
            no
            return;
        }
    }
    if(n>MEX){
        yes
        return;
    }
    no
}

int main() {
    M__K;
    int t = 1;
    in(t);
    while (t--) {
        solve();
    }
    return 0;
}
