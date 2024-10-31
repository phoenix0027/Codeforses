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

bool check(ll n,ll k,ll mid){
    ll sum1=(k*(k+1)*1LL)/2;
    ll sum2=((k-mid)*(k-mid+1)*1LL)/2;
    // cout<<mid<<" "<<sum1<<" "<<sum2<<endl;
    // sum1-=k+1; sum2++;
    ll cnt=sum1-sum2-mid+1;
    return cnt>=n;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    if(n<k){
        println(0);
        return;
    }
    ll low=1,high=k;
    ll ans=-1;
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(check(n,k,mid)){
            high=mid-1;
            ans=mid;
        }
        else{
            low=mid+1;
        }
    }
    if(ans<=(k-1)){
        println(ans)
        return;
    }
    println(-1);
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