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
#define forn(i, n) for(int i = 0; i < (n); i++)
#define forab(i, a, b) for(int i = (a); i <= (b); i++)
#define forabrev(i, a, b) for(int i = (b); i >= (a); i--)
#define forall(it, v) for(auto &it : (v))
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
const int M=1e9+7;

bool check(vll v, ll mid, ll x, ll k){
    ll cnt=0;
    for(int i=v.size()/2;i<v.size();i++){
        if((mid-v[i])>0) cnt+=mid-v[i];
        if(cnt>k) return false;
    }
    return true;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    vll v(n);
    forn(i,n){
        cin>>v[i];
    }
    sort(all(v));
    ll low=1;
    ll high=2e9;
    ll ans;
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(check(v,mid,v[n-1],k)){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<ans<<endl;
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