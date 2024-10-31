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
    int n,m;
    cin>>n>>m;
    vstr a(n),b(n);
    forn(i,n) cin>>a[i];
    forn(i,n) cin>>b[i];
    bool t1=true;
    forn(i,n){
        int x=0,y=0;
        forn(j,m) x+=a[i][j]-'0';
        forn(j,m) y+=b[i][j]-'0';
        if(x%3!=y%3){
            t1=false;
            break;
        }
    }
    forn(i,m){
        int x=0,y=0;
        forn(j,n) x+=a[j][i]-'0';
        forn(j,n) y+=b[j][i]-'0';
        if(x%3!=y%3){
            t1=false;
            break;
        }
    }
    if(t1) yes
    else no
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