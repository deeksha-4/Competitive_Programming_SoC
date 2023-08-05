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

bool ch(ll mid, vll v, vll w, ll n, ll m)
{
    ll x=0;
    ll extra_time = 0, extra_tasks=0;
    rep(i, 0, n)
    {
        if (w[i]>mid)
        {
            extra_tasks+=w[i]-mid;
        }
        else if (w[i]<mid)
        {
            extra_time+=mid-w[i];
        }
    }
    if (extra_time >= 2*extra_tasks) return 1;
    return 0;
}

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t; cin>>t; while(t--)
    {
        ll n, m; cin>>n>>m;
        vll v; vll w(n, 0);
        rep(i, 0, m)
        {
            ll x; cin>>x; 
            v.pb(x);
            w[x-1]++;
        } 
        ll l=1, r=2*m, mid, ans;
        while(l<=r)
        {
            mid = (l+r)/2;            
            if (ch(mid, v, w, n, m))
            {
                ans = mid;
                r = mid-1;
            }
            else l = mid+1;
        }
        cout<<ans<<ne;
    }
}