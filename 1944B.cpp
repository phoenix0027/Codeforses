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
    int n,k;
    cin>>n>>k;
    vi v(2*n);
    forn(i,2*n) cin>>v[i];
    umpii mp1,mp2;
    vi ans1,ans2;
    forn(i,n){
        mp1[v[i]]++;
        if(mp1[v[i]]==2){
            ans1.push_back(v[i]);
            ans1.push_back(v[i]);
        }
    }
    for(int i=n;i<2*n;++i){
        mp2[v[i]]++;
        if(mp2[v[i]]==2){
            ans2.push_back(v[i]);
            ans2.push_back(v[i]);
        }
    }
    if(ans1.size()>=(2*k)){
        while(ans1.size()>(2*k)){
            ans1.pop_back();
            ans2.pop_back();
        }
    }
    else{
        for(auto& i:mp1){
            if(ans1.size()==(2*k)){
                break;
            }
            if(i.ss==1&&mp2.find(i.ff)!=mp2.end()){
                ans1.push_back(i.ff);
                ans2.push_back(i.ff);
            }
        }
    }
    for(auto& i:ans1) cout<<i<<" ";
    cout<<"\n";
    for(auto& i:ans2) cout<<i<<" ";
    cout<<"\n";
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