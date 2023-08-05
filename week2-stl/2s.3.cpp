#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define sll set<ll>
#define ne '\n'
#define rep(i, a, b) for (int i=a; i<b; ++i)
#define vecinp(v) rep(i, 0, n){ll x; cin>>x; v.pb(x);}

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while(t--)
    {
        ll n, k; cin>>n>>k;
        vector<pair<ll, ll>> v;
        vll h, p;
        vecinp(h)
        rep(i, 0, n)
        {
            ll x; cin>>x; p.pb(x);
            pair<ll, ll> p; p.first=h[i], p.second=x;
            v.pb(p);
        }
        ll c=0; ll f=0; sort(h.begin(), h.end());
        ll m=1e9; ll a = k;
        while(k>0 && c<n)
        {
            c=0;
            ll ans =0, l=f, r=n-1, mid; bool f=0;
            while(l<=r)
            {
                mid = (l+r)/2;
                if (h[mid]>a)
                {
                    ans = mid;
                    l=mid-1;
                }
                else if (h[mid]<=a) r=mid+1;                
            }
            f = ans;
            if (f==n-1 && h[f]<=a)
            {
                cout<<"YES"<<ne; f=1;
                break;
            }
            for (auto x : v)
            {
                if (x.first>=h[ans])
                {
                    m = min(x.second, m);
                }
                else c++;
            }
            k-=m;
            a+=k;
        }
        if (f==0) cout<<"NO"<<ne;
    }
}
