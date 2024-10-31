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

void solve(){
    string a,s;
    cin>>a>>s;
    string str="";
    int i=0,j=0;
    reverse(all(a));reverse(all(s));
    while(i<a.length() && j<s.length()){
        if(a[i]>s[j]){
            ll n=((s[j+1]-'0')*10)+(s[j]-'0');
            n-=(a[i]-'0');
            if(n>9){
                cout<<-1<<endl;
                return;
            }
            str+=to_string(n);
            j+=2;
        }
        else{
            ll n=(s[j]-'0');
            ll n1=(a[i]-'0');
            str+=to_string(n-n1);
            j++;
        }
        i++;
    }
    while(j<s.length()){
        str+=s[j];
        j++;
    }
    if(str[0]=='-' || str.find('-')!=string::npos){
        cout<<-1<<endl;
        return;
    }
    reverse(all(str));
    if(i<a.length()){
        cout<<-1<<endl;
        return;
    }
    i=0;
    while(i<s.length() && str[i]=='0'){
        i++;
    }
    if(i==s.length()){
        cout<<0<<endl;
    }
    else{
        println(str.substr(i));
    }
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