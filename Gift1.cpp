/*
USER: arkapra2
TASK: gift1
LANG: C++14
*/

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define ppb pop_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pld pair<ld, ld>
#define mp make_pair
#define mt make_tuple
#define ff first
#define ss second
#define uset unordered_set
#define umap unordered_map
#define all(x) x.begin(), x.end()
#define revall(x) x.rbegin(), x.rend()
#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define T int tt; cin>>tt; while(tt--)
 
const ll MOD = (ll)(1e9+7);
const int inf = (int)INFINITY;
const ll INF = (ll)INFINITY;
const int MAX = (int)1e5;
 
int main() {
    fastio;
    freopen("gift1.in", "r", stdin);
    freopen("gift1.out", "w", stdout);
    int n; cin>>n;
    unordered_map<string, int> m;
    vector<string> s;
    string name;
    for(int i = 0; i < n; i++) {
        cin>>name;
        m[name] = 0;
        s.pb(name);
    }
    for(int i = 0; i < n; i++) {
        cin>>name;
        int sum, no;
        cin>>sum>>no;
        m[name] -= sum;
        if(no != 0)
            m[name] += sum%no;
        for(int j = 0; j < no; j++) {
            cin>>name;
            m[name] += sum/no;
        }
    }
    for(auto x : s) {
        cout<<x<<" "<<m[x]<<endl;    
    }
    return 0;
}      