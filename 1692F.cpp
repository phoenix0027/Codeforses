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

void solve(){
    int n;
    cin>>n;
    umpii mp;
    forn(i,n){
        int x;
        cin>>x;
        mp[x%10]++;
    }
    for(int i=0;i<=9;++i){
        for(int j=0;j<=9;++j){
            for(int k=0;k<=9;++k){
                if(i==j==k && mp[i]<3) continue;
                if(i==j && mp[i]<2) continue;
                if(i==k && mp[i]<2) continue;
                if(j==k && mp[j]<2) continue;
                int sum=i+j+k;
                if((sum==3 || sum==13 || sum==23)&&mp.find(i)!=mp.end()&&mp.find(j)!=mp.end()&&mp.find(k)!=mp.end()&&mp[i]>0&&mp[j]>0&&mp[k]>0){
                    yes
                    // cout<<i<<" "<<j<<" "<<k<<endl;
                    return;
                }
            }
        }
    }
    no
}

int main(){
                                        M_K_45;
    int t=1;
    in(t);
    while(t--){
        solve();
    }
    return 0;
}