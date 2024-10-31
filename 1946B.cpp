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
const int M=1e9+7;

int main(){
    M_K_45;
    int t=1;
    in(t);
    while(t--){
        ll n,k;
        cin>>n>>k;
        vll v(n);
        forn(i,n) cin>>v[i];
        ll maxSum=0;
        ll currSum=0;
        forn(i,n){
            currSum+=v[i];
            if(currSum<0) currSum=0;
            maxSum=max(currSum,maxSum);
        }
        ll totalSum=0;
        forn(i,n){
            totalSum=(totalSum%M + (v[i]%M + M)%M)%M;
        }
        while(k--){
            totalSum=(totalSum%M + maxSum%M)%M;
            maxSum=(maxSum*2)%M;
        }
        cout<<totalSum%M<<endl;
    }
    return 0;
}