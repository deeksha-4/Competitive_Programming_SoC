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

bool ch(ll mid, vll a, vll b, ll n, ll u)
{
    
}

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t; cin>>t; while(t--)
    {
        ll n, u; cin>>n>>u;
        vll a, b;
        vecinp(a, n); vecinp(b, n);
        ll l=0, r=1e7, mid, ans;
        while(l<=r)
        {
            mid = (l+r)/2;
            if (ch(mid, a, b, n, u))
            {
                ans = mid; r=mid-1;
            }
            else l = mid+1;
        }
        cout<<ans<<ne;
    }
}









