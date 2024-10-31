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

int main(){
    M_K_45;
    int t=1;
    in(t);
    while(t--){
        int n;
        in(n);
        vi a(n),b(n);
        forn(i,n) in(a[i]);
        forn(i,n) in(b[i]);

        vpii p;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i] >= a[j] && b[i] >= b[j]){
                    swap(a[i], a[j]);
                    swap(b[i], b[j]);
                    p.push_back({j + 1, i + 1});
                }
            }
        }
        if(is_sorted(all(a)) && is_sorted(all(b))){
            cout<<p.size()<<endl;
            forn(i,p.size()){
                cout<<p[i].ff<<" "<<p[i].ss<<endl;
            }
            continue;
        }
        cout<<-1<<endl;
    }
    return 0;
}