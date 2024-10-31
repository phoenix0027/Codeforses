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
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main(){
    M_K_45;
    int t;
    in(t);
    while(t--){
        ll hc,dc,hm,dm,k,w,a;
        cin>>hc>>dc>>hm>>dm>>k>>w>>a;
        bool t=false;
        forn(i,k+1){
            ll nhc=hc+i*a;
            ll ndc=dc+(k-i)*w;
            ll x=(hm+ndc-1)/ndc;
            ll y=(nhc+dm-1)/dm;
            if(x<=y){
                t=true;
                break;
            }
        }
        if(t){
            yes
            continue;
        }
        no
    }
    return 0;
}