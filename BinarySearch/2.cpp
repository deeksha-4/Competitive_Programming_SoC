#include <bits/stdc++.h>
#define ll unsigned long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define vpll vector<pair<ll, ll>>
#define sll set<ll>
#define ne '\n'
#define rep(i, a, b) for (ll i=a; i<b; ++i)
#define vecinp(v, n); rep(i, 0, n){ll x; cin>>x; v.pb(x);}

using namespace std;

bool ch(vll v, ll mid, ll k, ll n)
{
    ll i=0, c=0;
    while(i<n)
    {
        if (v[i]>mid) return 0;
        ll j=i+1;
        ll s = v[i];
        while(j<n)
        {
            if (s+v[j]>mid) {c++; i=j; break;}
            else s+=v[j];
            j++;
        }
        if (c==k && j!=n) return 0;
        if (j==n) return 1;
    }
    return 1;
}

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n, k;
    cin>>n>>k;
    vll v; vecinp(v, n);
    ll l=0, r=n*1e9, mid, ans;
    while(l<=r)
    {
        mid = (l+r)/2;
        if (ch(v, mid, k, n)==1)
        {
            r = mid-1;
            ans = mid;
        }
        else 
        {
            l = mid+1;
        }
    }
    cout<<ans;
}