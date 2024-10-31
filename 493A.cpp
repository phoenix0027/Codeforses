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
        string ht,at;
        cin>>ht>>at;
        int n;
        cin>>n;
        vector<int> vh(100,0);
        vector<int> va(100,0);
        while(n--){
            int x,y;
            char c1,c2;
            cin>>x>>c1>>y>>c2;
            if(c2=='y'){
                if(c1=='h' && vh[y]!=-1){
                    vh[y]++;
                    if(vh[y]==2){
                        if(c1=='h') cout<<ht<<" ";
                        else cout<<at<<" ";
                        cout<<y<<" "<<x<<endl;
                        vh[y]=-1;
                    }
                }
                else if(c1=='a' && va[y]!=-1){
                    va[y]++;
                    if(va[y]==2){
                        if(c1=='h') cout<<ht<<" ";
                        else cout<<at<<" ";
                        cout<<y<<" "<<x<<endl;
                        va[y]=-1;
                    }
                }
            }
            else{
                if(c1=='h' && vh[y]!=-1){
                    vh[y]=-1;
                    cout<<ht<<" ";
                    cout<<y<<" "<<x<<endl;
                }
                else if(c1=='a' && va[y]!=-1){
                    va[y]=-1;
                    cout<<at<<" ";
                    cout<<y<<" "<<x<<endl;
                }
            }
        }
    }
    return 0;
}