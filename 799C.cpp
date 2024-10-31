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
    ll n,m;
    cin>>n;
    vector<tuple<int,int,int>> v;
    vll v1(n),v2(n),v3(n);
    umpii mp1,mp2;
    forn(i,n) cin>>v1[i];
    forn(i,n) cin>>v2[i];
    forn(i,n) cin>>v3[i];
    forn(i,n){
        v.push_back({v1[i],v2[i],v3[i]});
    }
    vector<set<pair<int,int>>> a(4);
    forn(i,n){
        a[v2[i]].insert({v1[i],i});
        a[v3[i]].insert({v1[i],i});
    }
    cin>>m;
    while(m--){
        int x;
        cin>>x;
        if(a[x].empty()){
            prints(-1);
        }
        else{
            auto it=a[x].begin();
            int idx=it->second;
            int p=it->first;
            prints(p);
            a[v2[idx]].erase({v1[idx],idx});
            a[v3[idx]].erase({v1[idx],idx});
        }
    }
}

int main(){
                                        M_K_45;
    int t=1;
    // in(t);
    while(t--){
        solve();
    }
    return 0;
}