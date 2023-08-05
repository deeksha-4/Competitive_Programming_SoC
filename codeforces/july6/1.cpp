#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define sll set<ll>
#define ne '\n'
#define rep(i, a, b) for (int i=a; i<b; ++i)

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while(t--)
    {
        ll n, k; cin>>n>>k;
        vll v, w; rep(i, 0, n)
        {
            ll x; cin>>x; v.pb(x);
            if(i!=0) w.pb(fabs(x-v[i-1]));
        }
        sort(w.begin(), w.end());
        ll s=0;
        rep(i, 0, n-k) s+=w[i];
        cout<<s<<ne;
    }
}