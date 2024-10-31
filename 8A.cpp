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
    string s,s1,s2;
    cin>>s>>s1>>s2;
    string str[4]={"fantasy","forward","backward","both"};
    int cnt=0;
    if(s.find(s1)!=string::npos && s.find(s2,s1.size()+s.find(s1))!=string::npos) cnt++;
    reverse(all(s));
    if(s.find(s1)!=string::npos && s.find(s2,s1.size()+s.find(s1))!=string::npos) cnt+=2;
    println(str[cnt])
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