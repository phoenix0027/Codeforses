#include<bits/stdc++.h>
using namespace std;

#define M_K_45 ios::sync_with_stdio(false); cin.tie(0);
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
    int n,p;
    cin>>n>>p;
    vpii vp(n);
    forn(i,n) cin>>vp[i].ff;
    forn(i,n) cin>>vp[i].ss;
    sort(all(vp),[](const pair<int,int>& a,pair<int,int>& b){
        if(a.ss==b.ss){
            return a.ff>b.ff;
        }
        return a.ss<b.ss;
    });
    ll sum=0;
    sum+=p;
    ll k=1;
    forn(i,n){
        if(k==n) break;
        ll f = vp[i].ff;
        ll c = vp[i].ss;
        if(c>=p){
            sum+=(n-k)*p;
            println(sum);
            return;
        }
        else{
            ll g = min(n-k,f);
            sum+=g*c;
            k+=g;
        }
    }
    println(sum);
}

int main(){
                                        M_K_45;
    int t=1;
    in(t);
    while(t--){
        solve();
    }
    return 0;
}