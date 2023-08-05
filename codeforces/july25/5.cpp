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
    ll t; cin>>t; while(t--)
    {
        ll n, k; cin>>n>>k;
        vll v; vecinp(v, n);
        // v is costs
        vector<bool> ch(n);
        // ch means do i have inf
        rep(i, 0, k)
        {
            ll x; cin>>x; ch[x-1]=1; v[x-1]=0;
        }
        vll mc(n, 0);
        // min cost of making
        map<ll, vll> m;
        rep(i, 0, n)
        {
            ll x; cin>>x;
            if (x==0) {mc[i]=v[i]; continue;}
            vll pos;
            rep(j, 0, x)
            {
                ll k; cin>>k;
                pos.pb(k-1);
                if (!ch[k-1] && )
            }
            m[i]=pos;
        }
    }
}