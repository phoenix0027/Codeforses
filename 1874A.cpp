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
    int n,m,k;
    cin>>n>>m>>k;
    vi a(n), b(m);
    forn(i,n) cin>>a[i];
    forn(i,m) cin>>b[i];
    sort(all(a));sort(all(b));
    ll sum=0;
    if(b[m-1]>=a[0]){
        swap(a[0],b[m-1]);
        k--;
        sort(all(a));sort(all(b));
        forn(i,n){
            sum+=a[i];
        }
        if(k==0 || !(k&1)){
            println(sum);
            return;
        }
        if(k&1){
            sum+=b[0];
            sum-=a[n-1];
            println(sum);
            return;
        }
    }
    if(a[n-1]>=b[0]){
        if(k==1){
            forn(i,n){
                sum+=a[i];
            }
            println(sum);
            return;
        }
        if(b[m-1]>a[0]){
            swap(a[n-1],b[0]);
        }
        k--;
        sort(all(a));sort(all(b));
        forn(i,n){
            sum+=a[i];
        }
        if(k==0 ||!(k&1)){
            println(sum);
            return;
        }
        if(k&1){
            sum+=b[0];
            sum-=a[n-1];
            println(sum);
            return;
        }
    }
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