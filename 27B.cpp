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
    // in(t);
    while(t--){
        int n;
        in(n);
        int n1=n;
        vi v(51,0);
        n=((n*(n-1))/2)-1;
        vpii p;
        forn(i,n){
            int x,y;
            cin>>x>>y;
            v[x]++;
            p.pb({min(x,y),max(x,y)});
        }
        sort(all(p),[](const pii& a,const pii& b){
            if(a.ff==b.ff){
                return a.ss<b.ss;
            }
            return a.ff<b.ff;
        });
        for(int i=1;i<=n1;i++){
            for(int j=i+1;j<=n1;j++){
                if(!binary_search(all(p),make_pair(i,j))){
                    if(v[i]>v[j]){
                        cout<<i<<" "<<j<<endl;
                    }
                    else{
                        cout<<j<<" "<<i<<endl;
                    }
                    break;
                }
            }
        }
    }
    return 0;
}