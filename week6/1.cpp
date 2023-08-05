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

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n, m, k;
    cin>>n>>m>>k;
    vpll w;
    vll a[m+1];
    rep(i, 0, m)
    {
        ll d, b; cin>>d>>b;
        a[d].pb(b);
        a[b].pb(d);
    }
    vector<bool> ch(n+1), done(n+1);
    rep(i, 0, k)
    {
        ll p, h; cin>>p>>h;
        vll dist(n+1, INFINITY);
        dist[p]=0;
        priority_queue<pair<ll, ll>> q;
        q.push({0, p});
        while (!q.empty())
        {
            ll x = q.top().second; q.pop();
            if (done[x]) continue;
            done[x]=true;
            for (auto u:a[x])
            {
                ll a1=u.F, a2=u.S;j
            }
        }
    }

}