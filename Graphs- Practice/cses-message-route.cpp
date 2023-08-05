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
    ll n,m; cin>>n>>m;
    vll a[n+1];
    rep(i, 0, m)
    {
        ll z, b; cin>>z>>b;
        a[z].pb(b);
        a[b].pb(z);
    }
    vector<bool> ch(n+1);
    queue<ll> q;
    q.push(1);
    vll d(n+1);
    d[1]=0;
    bool g=0;
    vll prev(n+1);
    while(!q.empty())
    {
        ll e = q.front();
        q.pop();
        if (ch[e]) continue;
        ch[e]=true;
        for (auto it : a[e])
        {


            if (d[it]>d[e]+1 || d[it]==0)
            {
                d[it]=d[e]+1;
                prev[it]=e;
            }



            if (it==n) {ch[n]=true; g=1;break;}
            q.push(it);
        }
        if (g==1) break;
    }
    if (!ch[n]){cout<<"IMPOSSIBLE"<<ne; return 0;}
    vll f; ll x=n; f.pb(x);
    while(x!=1)
    {
        f.pb(prev[x]);
        x=prev[x];
    }
    rv(f);
    cout<<f.size()<<ne;
    for(auto u:f)
    cout<<u<<" ";
}