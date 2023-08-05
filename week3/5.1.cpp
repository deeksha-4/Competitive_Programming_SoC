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
    ll n, q ; cin>>n>>q;
    vll v;
    vecinp(v, n);
    vll s;
    vpll w;
    ll c=2, pr=0;
    rep(i, 2, n)
    {
        if (v[i-1]>=v[i-1] && v[i-1]>=v[i])
        {
            w.pb({pr, i-1});
            pr = i-1;
        }
    }
    w.pb({n-1, pr});
    while(q--)
    {
        ll l, r; cin>>l>>r; l--; r--;
        auto it = lower_bound(w.begin(), w.end(), l);
        auto jt = upper_bound(w.begin(), w.end(), r);
        ll ln=0;
        while(it!=jt)
        {
            ln = max(ln, min(*it.S-*it.F, r-*it.F));
        }
    }




    rep(i, 2, n)
    {
        if (v[i-2]>=v[i-1] && v[i-1]>=v[i])
        {
            s.pb(i-2);
        }
    }
    while(q--)
    {
        ll l, r; cin>>l>>r;

    }
}