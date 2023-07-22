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

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n; cin>>n; vll v;
    vecinp(v, n-1);
    sort(v.begin(), v.end());
    rep(i, 0, n-1)
    {
        if (v[i]!=i+1)
        {
            cout<<i+1<<ne; return 0;
        }
    }
    cout<<n;
}
