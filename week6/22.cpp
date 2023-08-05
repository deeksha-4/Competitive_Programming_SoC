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

void chk(ll node, ll parent, ll fall[], vll a[], ll n, ll size[])
{
    //
    fall[node]=0;
    if (size[node]==0) fall[node]=1;
    for (auto u: a[node])
    {
        if (u== parent) continue;
        chk(u, node, fall, a, n, size);
        fall[node]+=fall[u];
    }
}

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t; cin>>t; while(t--)
    {
        ll n; cin>>n;
        vll a[n+1];
        rep(i, 0, n-1)
        {
            ll u, v; cin>>u>>v;
            a[u].pb(v); a[v].pb(u);
        }
        ll size[n+1];
        ll fall[n+1];
        
        size[1]=a[1].size();
        rep(i, 2, n+1)
        {
            size[i]=a[i].size()-1;
        }
        chk(1, 0, fall, a, n, size);
        ll q; cin>>q; while (q--)
        {
            ll x, y; cin>>x>>y;
            cout<<fall[x]*fall[y]<<ne;
            
        }
    }
}