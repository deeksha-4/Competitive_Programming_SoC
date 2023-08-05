#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define vpll vector<pair<ll, ll>>
#define sll set<ll>
#define pll pair<ll, ll>
#define pqll priority_queue<ll>
#define ne '\n'
#define rep(i, a, b) for (ll i=a; i<b; ++i)
#define vecinp(v, n); rep(i, 0, n){ll x; cin>>x; v.pb(x);}
#define sv(v) sort(v.begin(), v.end())

using namespace std;

int main()
{
    ll d=0;
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n, m, k; cin>>n>>m>>k;
    vll b; vpll a;
    rep(i, 0, n)
    {
        pll p; ll x; cin>>x;
        p.first=max(d, x-k);
        p.second=x+k;
        a.pb(p);
    }
    sv(a); bool f=0;
    ll c=0, i=0;
    vecinp(b, m);
    sv(b);
    
    rep(i, 0, m)    
    {
        rep(j, 0, n)
        {
            if (a[j].first<=b[i] && b[i]<=a[j].second)
            {
                f=1;
                ll I = i;
                ll J = j;
                break;
            }
        
        }
        if (f==1) break;
    }
    if (f==0) {cout<<0; return 0;}

}