/*
ID: horsbug
LANG: C++14
PROG: ride
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
    //T {
        freopen("ride.in", "r", stdin);
        freopen("ride.out", "w", stdout);
        string s1, s2;
        cin>>s1>>s2;
        int sum1 = 1, sum2 = 1;
        const int MD = 47;
        for(auto x : s1)
            sum1 = (sum1 * (x - 64))%MD;
        for(auto x : s2)
            sum2 = (sum2 * (x - 64))%MD;
        if(sum1 == sum2)
            cout<<"GO";
        else
            cout<<"STAY";
        cout<<endl;
    //}
    return 0;
}      