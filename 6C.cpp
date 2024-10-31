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

int main(){
                                        M_K_45;
    int t=1;
    // in(t);
    while(t--){
        int n;
        cin>>n;
        vi v(n);
        forn(i,n) cin>>v[i];
        vi pf(n),sf(n);
        pf[0]=v[0];
        sf[n-1]=v[n-1];
        for(int i=1;i<n;i++){
            pf[i]=pf[i-1]+v[i];
        }
        for(int i=n-2;i>=0;i--){
            sf[i]=sf[i+1]+v[i];
        }
        int x=0;
        forn(i,n){
            if(pf[i]<=sf[i]) x++;
        }
        cout<<x<<" "<<n-x<<endl;
    }
    return 0;
}