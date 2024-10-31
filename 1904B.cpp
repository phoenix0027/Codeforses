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
    ll n;
    cin>>n;
    ll sum=0;
    vpll vp(n);
    vll v(n);
    forn(i,n){
        cin>>vp[i].ff;
        v[i]=vp[i].ff;
        sum+=vp[i].ff;
    }
    srt(vp);
    rev(vp);
    vp[0].ss=n-1;
    for(int i=1;i<n;++i){
        sum-=vp[i-1].ff;
        if(sum>=vp[i-1].ff){
            vp[i].ss=vp[i-1].ss;
        }
        else{
            vp[i].ss=n-i-1;
        }
    }
    map<ll,ll> mp;
    forn(i,n){
        mp[vp[i].ff]=vp[i].ss;
    }
    forn(i,n){
        cout<<mp[v[i]]<<" ";
    }
    cout<<"\n";
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