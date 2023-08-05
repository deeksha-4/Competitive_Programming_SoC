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

bool ch(vll a, vll b, ll mid, ll n)
{
    rep(i, 0, n)
    {
        auto lb = lower_bound(b.begin(), b.end(), a[i]);
        if (a[i]>=*lb-mid && a[i]<=*lb+mid) continue;
        lb--;
        if (a[i]>=*lb-mid && a[i]<=*lb+mid) continue;
        return 0;
    }
    return 1;
}

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n, m; cin>>n>>m;
    vll a, b;
    vecinp (a, n);
    vecinp(b, m);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll l=0, r=1e18-1, mid, ans;
    while(l<=r)
    {
        mid = (l+r)/2;
        if (ch(a, b, mid, n))
        {
            ans = mid;
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    cout<<ans;
}