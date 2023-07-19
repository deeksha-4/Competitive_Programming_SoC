#include <bits/stdc++.h>
#define ll unsigned long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define sll set<ll>
#define ne '\n'
#define rep(i, a, b) for (int i=a; i<b; ++i)
#define vecinp(v, n); rep(i, 0, n){ll x; cin>>x; v.pb(x);}
#define ms 1000000

using namespace std;

ll n, m;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while(t--)
    {
        cin>>n>>m;
        ll a[n][m];
        rep(i, 0, n)
        {
            rep(j, 0, m) cin>>a[i][j];
        }
        ll l=1, ans, x, r=min(m, n);
        while(l<=r)
        {
            x = (l+r)/2;
            ll ok = 0;
            bool f=0;
                rep(i, 0, n-x+1)
                {
                    rep(j, 0, m-x+1)
                    {
                        rep(k, i, i+x)
                        {
                            if (*min_element(a[k]+j, a[k]+j+x)<x) {f=1; break;}
                        }
                        if (f==0) {ok=1; break;}
                        f=0;
                    }
                    if (f==0) break;
                }

            if (ok)
            {
                ans = x; l = x+1;
            }
            else r = x - 1;            
        }
        cout<<ans<<ne;
    }
}
