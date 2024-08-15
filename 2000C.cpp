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
        int n;
        in(n);
        vector<int> v(n);
        forn(i,n){
            cin>>v[i];
        }
        int m;
        cin>>m;
        vstr s;
        forn(i,m){
            string str;
            cin>>str;
            s.pb(str);
        }
        forn(i,m){
            if(s[i].size()!=n){
                println("NO");
                continue;
            }
            bool t=true;
            unordered_map<char,int> ci;
            unordered_map<int,char> ic;
            forn(j,n){
                int n=v[j];
                char ch=s[i][j];
                if(ic.count(n) && ic[n]!=ch){
                    t=false;
                    break;
                }
                if(ci.count(ch) && ci[ch]!=n){
                    t=false;
                    break;
                }
                ic[n]=ch;
                ci[ch]=n;
            }
            if(t){
                println("YES");
            }
            else{
                println("NO");
            }
        }
    }
    return 0;
}