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
        string s;
        cin>>s;
        int i=1;
        int x=(s[0]-'0');
        while(s[i]=='0'){
            x*=10;
            i++;
        }
        int y=0;
        while(i<s.length()){
            y*=10;
            y+=(s[i]-'0');
            i++;
        }
        if(x!=10){
            println("NO");
        }
        else if(x==10 && y>=2){
            println("YES");
        }
        else{
            println("NO");
        }
    }
    return 0;
}