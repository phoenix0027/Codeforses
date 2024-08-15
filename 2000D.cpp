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
#define umpii unordered_map<int, int>
#define umpll unordered_map<long long, long long>
#define umpchi unordered_map<char, int>
#define umpstr unordered_map<string, int>
#define forn(i, n) for(int i = 0; i < (n); i++)
#define forab(i, a, b) for(int i = (a); i <= (b); i++)
#define forabrev(i, a, b) for(int i = (b); i >= (a); i--)
#define forall(it, v) for(auto &it : (v))

int main(){
    M_K_45;
    int t;
    in(t);
    while(t--){
        ll n;
        in(n);
        vll v(n);
        forn(i,n){
            in(v[i]);
        }
        vll prefix(n+1);
        prefix[0]=v[0];
        forn(i,n){
            prefix[i+1]=prefix[i]+v[i];
        }
        string s;
        in(s);
        int i=0,j=s.length()-1;
        ll ans=0;
        while(i<=j){
            if(s[i]!='L'){
                i++;
            }
            else if(s[j]!='R'){
                j--;
            }
            else{
                ans+=prefix[j+1]-prefix[i];
                i++;
                j--;
            }
        }
        println(ans);
    }
    return 0;
}