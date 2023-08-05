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
        ll n; cin>>n; vll a, b, s;
        vecinp(a)
        rep(i, 0, n) {ll x; cin>>x; b.pb(x); s.pb(0);}
        rep(i, 0, n)
        {
            rep(j, i, n)
            {
                if (a[i]==0) break;
                ll m=min(a[i], b[j]);
                s[j]+=m;
                a[i]-=m;
            }
        }
        rep(i, 0, n) cout<<s[i]<<" ";
        cout<<ne;
    }
}
