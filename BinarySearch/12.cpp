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

bool ch(ll mid, ll n)
{
    ll s=0;
    rep(i, 1, n+1)
    {
        if (mid/i == 0 && s<(n*n+1)/2) return 0;
        s+=min(n, mid/i);
        if (s>=(n*n+1)/2) return 1;
    }
    if (s<(n*n+1)/2) return 0;
    else return 1;
}

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n; cin>>n;
    ll l=0, r=n*n, mid, ans;
    while(l<=r)
    {
        mid = (l+r)/2;
        if (ch(mid, n))
        {
            ans = mid; r = mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<ne;
}