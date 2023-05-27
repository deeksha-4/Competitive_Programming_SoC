#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define sll set<ll>
#define ne '\n'
#define rep(i, a, b) for (int i=a; i<b; ++i)

using namespace std;
ll n, m;
vll c, t, d;

bool range(ll x)
{
    
}

ll bin(ll l, ll r)
{
    ll ans =0;
    while(l<=r)
    {
        ll mid = (l+r)/2;
        if (range(mid)==0)
        {
            l = mid+1;
        }
        else
        {
            r = mid-1;
            ans = mid;
        }
    }
    return ans;
}

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n>>m;
    rep(i, 0, n)
    {
        ll x; cin>>x; c.pb(x);
    }
    rep(i ,0, m)
    {
        ll x; cin>>x; t.pb(x);
    }
    cout<<bin(0, 2e9);
}