#include <bits/stdc++.h>
using namespace std;

#define M_K_45 ios::sync_with_stdio(false); cin.tie(0);
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

ll binomial_coefficient(int n, int k) {
    if (k > n) return 0;
    k = min(k, n - k);
    ll res = 1;
    for (int i = 0; i < k; i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

void solve(){
    string s1, s2;
    cin >> s1 >> s2;
    int pos1 = 0, neg1 = 0, pos2 = 0, neg2 = 0;
    forn(i, s1.length()) {
        if (s1[i] == '+') pos1++;
        else neg1++;
    }
    forn(i, s2.length()) {
        if (s2[i] == '+') pos2++;
        else if (s2[i] == '-') neg2++;
    }
    if (pos1 == pos2 && neg1 == neg2) {
        cout << fixed << setprecision(12) << 1.0 << endl;
    } else if (pos1 < pos2 || neg1 < neg2) {
        cout << fixed << setprecision(12) << 0.0 << endl;
    } else {
        int x = pos1 - pos2;
        int y = neg1 - neg2;
        int n = x + y;
        double ans = (double)binomial_coefficient(n, x) / (1 << n);
        cout << fixed << setprecision(12) << ans << endl;
    }
}

int main(){
    M_K_45;
    int t = 1;
    // in(t);
    while(t--) {
        solve();
    }
    return 0;
}
