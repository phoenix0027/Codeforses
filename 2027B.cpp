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

void solve(){
    int n;
    cin>>n;
    vll v(n);
    map<ll,ll> mp;
    forn(i,n){
        cin>>v[i];
        mp[v[i]]++;
    }
    multiset<ll> st(all(v));
    ll mn=INT_MAX;
    forn(i,n){
        auto y=st.lower_bound(v[i]);
        if(y==st.end()){
            continue;
        }
        ll x=distance(st.begin(),y);
        if(mp[v[i]]>0){
            x+=mp[v[i]]-1;
            mp[v[i]]--;
        }
        mn=min(mn,n-x-1);
        st.erase(st.find(v[i]));
    }
    println(mn);
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