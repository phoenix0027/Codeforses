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
    int n,d,k;
    cin>>n>>d>>k;
    vi s(n+1,0),e(n+1,0);
    forn(i,k){
        int x,y;
        cin>>x>>y;
        s[x]++;
        e[y]++;
    }

    forn(i,n) s[i+1]+=s[i];
    forn(i,n) e[i+1]+=e[i];

    int mn=INT_MAX,mx=INT_MIN;
    int x=0,y=0;
    for(int i=d;i<=n;++i){
        int curr=s[i]-e[i-d];
        if(curr>mx){
            mx=curr;
            x=i-d+1;
        }
        if(curr<mn){
            mn=curr;
            y=i-d+1;
        }
    }
    cout<<x<<" "<<y<<"\n";
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