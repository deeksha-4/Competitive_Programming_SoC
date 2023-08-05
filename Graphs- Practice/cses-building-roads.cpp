#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define vpll vector<pair<ll, ll>>
#define sll set<ll>
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define pqll priority_queue<ll>
#define ne '\n'
#define rep(i, a, b) for (ll i=a; i<b; ++i)
#define vecinp(v, n); rep(i, 0, n){ll x; cin>>x; v.pb(x);}
#define sv(v) sort(v.begin(), v.end())
#define rv(v) reverse(v.begin(), v.end())
#define fv(v, x) find(v.begin(), v.end(), x)
#define bsv(v, x) binary_search(v.begin(), v.end(), x)
#define cv(v, x) count(v.begin(), v.end(), x)
#define F first
#define S second

using namespace std;

void dfs(ll i, vector<int> ch, vector<vll> v)
{
    if (ch[i]) return;
    ch[i]=1;
    for (auto u : v[i])
    {
        dfs(u, ch, v);
    }
}

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n, m; cin>>n>>m;
    vector<vll> v(n+1);
    rep(i, 1, m+1)
    {
        ll x, y; cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }
    vll x;
    vector<int> ch(n+1);
    ll c=0;
    ll num=0;
    rep(i, 1, n+1)
    {
        if (ch[i]) continue;
        num++;
        x.pb(i);
        dfs(i, ch, v);
    }
    cout<<num-1<<ne;
    rep(i, 0, x.size()-1)
    {
        cout<<x[i]<<" "<<x[i+1]<<ne;
    }
}