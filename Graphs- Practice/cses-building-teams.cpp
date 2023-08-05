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
bool f=0;

void ass(vector<int> ch, ll i, int x, vll a[])
{
    if (find(ch.begin()+1, ch.end(), 0)==ch.end()) return;
    int y;
    if (x==1) y = 2;
    else y=1;
    for (auto u: a[i])
    {
        if (ch[u]==x)
        {
            f=1; return;
        }
        ch[u]=y;
    }
    for (auto u:a[i])
    {
        ass(ch, u, y, a);
    }
}

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n, m; cin>>n>>m;
    vll a[n+1];
    rep(i, 0, m)
    {
        ll x, y; cin>>x>>y; 
        a[x].pb(y); a[y].pb(x);
    }
    vector<int> ch(n+1);
    ch[1]=1;
    ass(ch, 1, 1, a);
    if (f==1) {cout<<"IMPOSSIBLE"; return 0;}
    rep(i, 1, n+1) cout<<ch[i]<<" ";
}