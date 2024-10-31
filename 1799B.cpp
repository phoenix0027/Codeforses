#include<bits/stdc++.h>
using namespace std;

#define M_K_45 ios::sync_with_stdio(false); cin.tie(0);
#define lcm(a, b) ((a) * (b) / (__gcd((a), (b))))
#define ll long long
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
#define vvll vector<vector<ll>>
#define umpii unordered_map<int, int>
#define umpll unordered_map<long long, long long>
#define umpchi unordered_map<char, int>
#define umpstr unordered_map<string, int>
#define forn(i, n) for(int i = 0; i < (n); i++)
#define forab(i, a, b) for(int i = (a); i <= (b); i++)
#define forabrev(i, a, b) for(int i = (b); i >= (a); i--)
#define forall(it, v) for(auto &it : (v))
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

void solve(){
    int n;
    cin>>n;
    vi v(n);
    forn(i,n) cin>>v[i];
    int mn=INT_MAX,idxMn=0;
    int mx=0;
    forn(i,n){
        if(mn>v[i]){
            idxMn=i;
            mn=v[i];
        }
        mx=max(mx,v[i]);
    }
    if(mn==mx){
        println(0);
        return;
    }
    vpii vp;
    int x=n*30;
    while(x--){
        forn(i,n){
            if(v[i]>mn){
                v[i]=ceil((double)v[i]/mn);
                vp.push_back({i+1,idxMn+1});
            }
        }
        mx=0;
        mn=INT_MAX;
        forn(i,n){
            if(mn>v[i]){
                idxMn=i;
                mn=v[i];
            }
            mx=max(mx,v[i]);
        }
        if(mn==mx){
            println(vp.size());
            forn(i,vp.size()){
                cout<<vp[i].ff<<" "<<vp[i].ss<<"\n";
            }
            return;
        }
    }
    println(-1);
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