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
    set<int> st1,st2;
    vector<vector<int>> ans(n,vector<int>(m,1));
    vector<vector<int>> v(n,vector<int>(m,0));
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>v[i][j];
            if(v[i][j]==0){
                st1.insert(i);
                st2.insert(j);
            }
        }
    }
    forn(i,n){
        forn(j,m){
            if(st1.find(i)!=st1.end()){
                ans[i][j]=0;
            }
        }
    }
    forn(i,m){
        forn(j,n){
            if(st2.find(i)!=st2.end()){
                ans[j][i]=0;
            }
        }
    }
    vector<int> row(n),col(m);
    for(int i=0;i<n;++i){
        int x=0;
        for(int j=0;j<m;++j){
            x|=ans[i][j];
        }
        row[i]=x;
    }
    for(int i=0;i<m;++i){
        int x=0;
        for(int j=0;j<n;++j){
            x|=ans[j][i];
        }
        col[i]=x;
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(v[i][j]!=(row[i]|col[j])){
                no;
                return;
            }
        }
    }
    yes
    forn(i,n){
        forn(j,m){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main(){
                                        M__K;
    int t=1;
    // in(t);
    while(t--){
        solve();
    }
    return 0;
}