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
        vi v(3,0);
        forn(i,3){
            string s;
            cin>>s;
            if(s[1]=='>'){
                v[s[2]-'A']++;
            }
            else{
                v[s[0]-'A']++;
            }
        }
        if(v[0]==0 && v[1]==1 && v[2]==2){
            cout<<"CBA"<<endl;
        }
        else if(v[0]==1 && v[1]==2 && v[2]==0){
            cout<<"BAC"<<endl;
        }
        else if(v[0]==2 && v[1]==0 && v[2]==1){
            cout<<"ACB"<<endl;
        }
        else if(v[0]==2 && v[1]==1 && v[2]==0){
            cout<<"ABC"<<endl;
        }
        else if(v[0]==0 && v[1]==2 && v[2]==1){
            cout<<"BCA"<<endl;
        }
        else if(v[0]==1 && v[1]==0 && v[2]==2){
            cout<<"CAB"<<endl;
        }
        else{
            cout<<"Impossible"<<endl;
        }
    }
    return 0;
}