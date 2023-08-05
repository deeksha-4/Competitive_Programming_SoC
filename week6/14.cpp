#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define vpll vector<pair<ll, ll>>
#define sll set<ll>
#define pll pair<ll, ll>
#define qll queue<ll>
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

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n, m, k, s; cin>>n>>m>>k>>s;
    vll goods(n+1);
    vll a[n+1];
    rep(i, 1, n+1)
    {
        cin>>goods[i];
    }
    rep(i, 0, m)
    {
        ll x, y; cin>>x>>y;
        a[x].pb(y);
        a[y].pb(x);
    }



    rep(i, 1, n+1)
    {
            vector<bool> vis(n+1);
    vll dist(n+1, 0);
        sll se;
        ll sum=0;
        qll q;
        q.push(i);
        vis[i]=1;
        while(!q.empty())
        {
            if (se.size()==s)
            {
                break;
            }
            ll e = q.front();
            
            q.pop();

            if (!binary_search(se.begin(), se.end(), e))
            {
                sum+=dist[e];
                se.insert(e);
            }
            for (auto u:a[e])
            {
                if (vis[u]) continue;
                q.push(u);
                vis[u]=1;
                dist[u]=dist[e]+1;
            }
        }
        cout<<sum<<" ";
    }
}