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

int Fact2(int x){
    int c=0;
    while(x%2==0){
        c++;
        x/=2;
    }
    return c;
}

int main(){
    M_K_45;
    int t=1;
    in(t);
    while(t--){
        int n;
        cin>>n;

        vi v(n);
        forn(i,n){
            cin>>v[i];
        }

        int count=0;
        forn(i,n){
            count+=Fact2(v[i]);
        }

        if(count>=n){
            cout<<0<<endl;
            continue;
        }

        vi arr;
        forn(i,n){
            arr.push_back(Fact2(i+1));
        }

        sort(all(arr));
        reverse(all(arr));

        int ans=0;
        forn(i,arr.size()){
            count+=arr[i];
            ans++;  
            if(count>=n){
                cout<<ans<<endl;
                break;
            }
        }
        if(count<n) cout<<-1<<endl;
    }
    return 0;
}