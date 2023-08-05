#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define vpll vector<pair<ll, ll>>
#define sll set<ll>
#define pll pair<ll, ll>
#define ne '\n'
#define rep(i, a, b) for (ll i=a; i<b; ++i)
#define vecinp(v, n); rep(i, 0, n){ll x; cin>>x; v.pb(x);}

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n, k; cin>>n>>k;
    vll v; ll f=0;
    vecinp(v, n);
    vll w(n);
    w[0]=0;
    rep(i, 1, n)
    {
        ll m= INFINITY;
        rep(j, max(i-k, f), i)
        {
            m=min(m, w[j]+abs(v[i]-v[j]));
        }
        w[i]=m;
    }
    cout<<w[n-1]<<ne;
}