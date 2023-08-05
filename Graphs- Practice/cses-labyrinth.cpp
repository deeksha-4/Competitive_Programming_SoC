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
    ll n, m; cin>>n>>m;
    vector<vector<bool>> a(n+2, vector<bool>(m+2)); pll start, end;
    rep(i, 1, n+1)
    {
        rep(j, 1, m+1)
        {
            char x; cin>>x;
            if (x=='.') a[i][j]=1;
            else if (x=='A') start = {i, j};
            else if (x=='B') end = {i, j};
        }
    }
    vector<vector<pair<ll, ll>>> pre;
    
    queue<pll> q;
    q.push(start);

    while(q.size())
    {
        pll e = q.front();
        q.pop();
        if (!a[e.F][e.S]) continue;
        if (a[e.F+1][e.S])
        {
            pre[e.F+1][e.S]=e;
        }
    }
}