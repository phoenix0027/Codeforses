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
    int t=1;
    // in(t);
    while(t--){
        int n;
        in(n);
        vi a(n),b(n-1),c(n-2);
        forn(i,n) in(a[i]);
        forn(i,n-1) in(b[i]);
        forn(i,n-2) in(c[i]);
        sort(all(a));
        sort(all(b));
        sort(all(c));
        int i=0,j=0;
        bool t=false;
        while(i<n-1 && j<n-1){
            if(a[i]!=b[j]){
                println(a[i]);
                a[i]=-1;
                t=true;
                break;
            }
            i++; j++;
        }
        if(!t){
            println(a[n-1]);
            a[n-1]=-1;
        }
        t=false;
        i=0,j=0;
        while(i<n && j<n-2){
            if(a[i]!=c[j] && a[i]!=-1){
                println(a[i]);
                t=true;
                break;
            }
            if(a[i]==c[j]){
                j++;
            }
            i++;
        }
        if(!t){
            while(i<n){
                if(a[i]!=-1){
                    println(a[i]);
                }
                i++;
            }
        }
    }
    return 0;
}