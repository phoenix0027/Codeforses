#include <bits/stdc++.h>
using namespace std;

#define M_K_45 ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define vll vector<long long>
#define all(x) (x).begin(), (x).end()
#define forn(i, n) for (int i = 0; i < (n); ++i)
#define println(x) cout << (x) << "\n";
#define in(x) cin >> (x);

bool check(vll v, int n, ll x) {
    ll sum = accumulate(all(v), 0LL) + x;
    double avg = (double)sum / n;
    avg /= 2.0;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] < avg) count++;
    }

    return count > n / 2;
}

void solve() {
    ll n;
    cin >> n;
    vll v(n);
    forn(i, n) cin >> v[i];

    if(n<3){
        println(-1)
        return;
    }

    ll low = 0, high = 1e12;
    ll ans = -1;

    while (low <= high) {
        ll mid = low + (high - low) / 2;
        if (check(v, n, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    println(ans);
}

int main() {
    M_K_45;
    int t = 1;
    in(t);
    while (t--) {
        solve();
    }
    return 0;
}
