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
    vector<vector<bool>> a(n+2, vector<bool>(m+2));
    rep(i, 1, n+1)
    {
        rep(j, 1, m+1)
        {
            char x;
            cin>>x;
            if (x=='.') a[i][j]=1;
            else a[i][j]=0;
        }
    }
    ll c=0;
    rep(i, 1, n+1)
    {
        rep(j, 1, m+1)
        {
            if (!a[i][j]) continue;
            vpll x;
            x.pb({i, j});
            c++;
            while(x.size())
            {
                pll e = *(--x.end());
                x.pob();
                a[e.first][e.second]=0;
                if (a[e.F+1][e.S]) x.pb({e.F+1, e.S});
                if (a[e.F-1][e.S]) x.pb({e.F-1, e.S});
                if (a[e.F][e.S+1]) x.pb({e.F, e.S+1});
                if (a[e.F][e.S-1]) x.pb({e.F, e.S-1});
            }
        }
    }
    cout<<c;
}