#include <bits/stdc++.h>
using namespace std;

#define M_K_45 ios::sync_with_stdio(false); cin.tie(0);
#define ll long long int
#define println(x) cout << (x) << "\n";
#define in(x) cin >> (x);
const int M = 1e9 + 7;

// Binary Exponentiation Function
ll binpow(ll base, ll exp) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    return result;
}

void solve() {
    int n, k;
    cin >> n >> k;
    ll cnt = 1;
    ll y = 0;
    
    if (k == 1) {
        println(n);
        return;
    }

    while (binpow(k, y) <= n) {
        y++;
    }
    // cout<<y<<endl;
    if (binpow(k, y-1) == n) {
        println(1);
        return;
    }

    n -= binpow(k, y - 1);

    while (y) {
        if (binpow(k, y) <= n) {
            n -= binpow(k, y);
            cnt++;
        } else {
            y--;
        }
    }
    println(cnt + n);
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
