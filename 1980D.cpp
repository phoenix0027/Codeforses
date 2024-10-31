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
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
const int M=1e9+7;

void solve(){
    int n;
    cin>>n;
    vi v(n);
    forn(i,n) cin>>v[i];
    vi g;
    forn(i,n-1){
        g.push_back(__gcd(v[i],v[i+1]));
    }
    int i=1;
    while(i<g.size()&&g[i-1]<=g[i]){
        i++;
    }
    if(i==g.size()){
        yes
        return;
    }
    vi g1,g2,g3;
    forn(j,n){
        if(j!=i){
            g1.push_back(v[j]);
        }
    }
    forn(j,n){
        if(j!=(i-1)){
            g2.push_back(v[j]);
        }
    }
    forn(j,n){
        if(j!=(i+1)){
            g3.push_back(v[j]);
        }
    }
    auto check = [](vi &v,int n){
        for(int i=1;i<n-1;++i){
            if(__gcd(v[i-1],v[i])>__gcd(v[i],v[i+1])){
                return false;
            }
        }
        return true;
    };
    if(check(g1,g1.size())||check(g2,g2.size())||check(g3,g3.size())){
        yes
        return;
    }
    no
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