#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define vpll vector<pair<ll, ll>>
#define sll set<ll>
#define ne '\n'
#define rep(i, a, b) for (ll i=a; i<b; ++i)
#define vecinp(v, n); rep(i, 0, n){ll x; cin>>x; v.pb(x);}

using namespace std;

bool ch(double mid, vpll v, ll n)
{
    vector<double> x;
    rep(i, 0, n)
    {
        x.pb(v[i].second-mid*v[i].first);
    }
    sort(x.begin(), x.end());
    rep(i, 0, n/2)
    {
        if (x[i]+x[n-i-1]<mid) return 0;
    }
    return 1;
}

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n; cin>>n;
    vpll v;
    rep(i, 0, n)
    {
        pair<ll, ll> p;
        cin>>p.first>>p.second;
        v.pb(p);
    }
    double l=0, r=1.666667, mid, ans;
    while(l<=r)
    {
        mid = (l+r)/2;
        if (ch(mid, v, n)==1)
        {
            ans = mid; l=mid+0.000001;
        }
        else r = mid-0.000001;
    }
    cout<<fixed;
    cout.precision(6);
    cout<<ans<<ne;
}