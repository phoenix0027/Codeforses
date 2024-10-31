#include<bits/stdc++.h>
using namespace std;

#define M__K ios::sync_with_stdio(false); cin.tie(0);
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
    ll k1,k2;
    cin>>k1;
    queue<int> q1,q2;
    forn(i,k1){
        int x;
        cin>>x;
        q1.push(x);
    }
    cin>>k2;
    forn(i,k2){
        int x;
        cin>>x;
        q2.push(x);
    }
    ll cnt=0;
    while(!q1.empty()&&!q2.empty()&&cnt<1e6){
        if(q1.front()>q2.front()){
            q1.push(q2.front());
            q2.pop();
            int x=q1.front();
            q1.pop();
            q1.push(x);
        }
        else if(q1.front()<q2.front()){
            q2.push(q1.front());
            q1.pop();
            int x=q2.front();
            q2.pop();
            q2.push(x);
        }
        else{
            q1.pop();
            q2.pop();
        }
        cnt++;
    }
    if(q1.empty()){
        cout<<cnt<<" "<<2<<"\n";
        return;
    }
    if(q2.empty()){
        cout<<cnt<<" "<<1<<"\n";
        return;
    }
    cout<<-1<<"\n";
    return;
}

int main(){
                                        M__K;
    int t=1;
    // in(t);
    while(t--){
        solve();
    }
    return 0;
}