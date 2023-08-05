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


ll sumdig(ll n) {
    ll sum = 0;
    while(n>0) {
        sum+=n%10;
        n =n/10;
    }
    return sum;
}

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t; cin>>t; while(t--)
    {
        ll n, q; cin>>n>>q;
        vll v;
        sll s;
        rep(i, 0, n) {
            ll x; cin>>x;
            v.pb(x);
            if (x>9) s.insert(i);
        }
        while(q--)
        {
            int x; cin>>x;
            if (x==2)
            {
                ll y; cin>>y; cout<<v[--y]<<ne;
            }
            else{
                ll l, r; cin>>l>>r; l--; r--;
                auto it = lower_bound(s.begin(), s.end(), l);
                while(it!=s.end() && *it<=r)
                {
                    ll e = *it;
                    ll num = v[e];
                    v[e]=sumdig(num);
                    if (v[e]<=9) s.erase(e);                    
                    it = upper_bound(s.begin(), s.end(), e);
                }
            }
        }
    }
}