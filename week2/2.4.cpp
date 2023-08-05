#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define sll set<ll>
#define ne '\n'
#define rep(i, a, b) for (int i=a; i<b; ++i)

using namespace std;

vll v, b, c;
ll co=0, x;

void trav(vll &a, ll l, ll r, ll s)
{
    if (l>r){
        v.pb(s); return;
    }
    trav(a, l+1, r, s+a[l]);
    trav(a, l+1, r, s);
}

void travmod(vll a, ll l, ll r, ll s)
{
    if (l>r){
        co+=count(v.begin(), v.end(), x-s);
        return;
    }
    travmod(a, l+1, r, s+a[l]);
    travmod(a, l+1, r, s);
    
}

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n;
    cin>>n>>x;
    ll a[n];
    rep(i, 0, n) cin>>a[i];
    if (n==1)
    {
        if (a[0]==x) cout<<1;
        else cout<<0;
        return 0;
    }
    rep(i, 0, n/2)
    {
        b.pb(a[i]);
        c.pb(a[n/2+i]);
    }
    trav(b, 0, n/2-1, 0);
    sort(v.begin(), v.end());
    travmod (c, 0, n-n/2-1, 0);
    cout<<co;
}