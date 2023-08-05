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

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t; cin>>t; while(t--)
    {
        ll n; cin>>n;
        vll v;
        vecinp(v, n);
        ll c=1;
        vll w(n);
        w[0]=1;
        rep(i, 1, n)
        {
            if (v[i]>=v[i-1])
            {
                w[i]=w[i-1]+1;
            }
            else w[i]=1;
            c+=w[i];
        }
        cout<<c<<ne;
    }
}