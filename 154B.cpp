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

void solve() {
    int n, m;
    cin >> n >> m;
    unordered_map<int, int> mp;
    unordered_set<int> st;
    while (m--) {
        char ch; 
        cin >> ch;
        int x;
        cin >> x;
        if (ch == '+') {
            if (st.find(x) != st.end()) {
                println("Already on");
            } else {
                bool tt = true;
                vector<int> conflicts;
                for (int i = 1; i * i <= x; ++i) {
                    if (x % i == 0) {
                        if (i != 1 && mp.count(i)) {
                            conflicts.push_back(mp[i]);
                            tt=false;
                        }
                        if (x / i != i && mp.count(x / i)) {
                            conflicts.push_back(mp[x / i]);
                            tt=false;
                        }
                    }
                }

                if (!tt) {
                    prints("Conflict with");
                    for (auto c : conflicts) {
                        cout << c << " ";
                        break;
                    }
                    cout << endl;
                } else {
                    mp[x] = x;
                    st.insert(x);
                    for (int i = 1; i * i <= x; ++i) {
                        if (x % i == 0) {
                            if (i != 1)
                                mp[i] = x;
                            if (x / i != i)
                                mp[x / i] = x;
                        }
                    }
                    println("Success");
                }
            }
        } else {
            if (st.find(x) == st.end()) {
                println("Already off");
            } else {
                st.erase(x);
                mp.erase(x);
                for (int i = 1; i * i <= x; ++i) {
                    if (x % i == 0) {
                        if (i != 1)
                            mp.erase(i);
                        if (x / i != i)
                            mp.erase(x / i);
                    }
                }
                println("Success");
            }
        }
    }
}

int main() {
    M_K_45;
    int t = 1;
    // in(t);
    while (t--) {
        solve();
    }
    return 0;
}