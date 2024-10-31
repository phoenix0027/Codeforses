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
    int t;
    in(t);
    while(t--){
        int n,q;
        in(n); in(q);
        string s1,s2;
        in(s1); in(s2);
        int a[n+1][26],b[n+1][26];
        forn(i,n+1){
            forn(j,26){
                a[i][j]=0;
                b[i][j]=0;
            }
        }
        forn(i,n){
            a[i+1][s1[i]-'a']++;
            b[i+1][s2[i]-'a']++;
        }
        forn(i,n){
            forn(j,26){
                a[i+1][j]+=a[i][j];
                b[i+1][j]+=b[i][j];
            }
        }
        while(q--){
            int l,r;
            in(l); in(r);
            int ans1[26]={0},ans2[26]={0};
            forn(i,26){
                ans1[i]=a[r][i]-a[l-1][i];
                ans2[i]=b[r][i]-b[l-1][i];
            }
            int ans=0;
            forn(i,26){
                ans+=abs(ans1[i]-ans2[i]);
            }
            println(ans/2);
        }
    }
    return 0;
}